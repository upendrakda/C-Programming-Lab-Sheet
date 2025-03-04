// Write a program to draw a rectangle. The length and breadth of rectangle should be 
// taken from users.
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main() {
    int gd = DETECT, gm;
    int x, y, length, breadth;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Taking user input for rectangle position and size
    printf("Enter the top-left corner coordinates (x y): ");
    scanf("%d %d", &x, &y);
    printf("Enter the length and breadth of the rectangle: ");
    scanf("%d %d", &length, &breadth);

    // Draw the rectangle
    rectangle(x, y, x + length, y + breadth);

    getch(); // Wait for a key press
    closegraph(); // Close graphics mode
}

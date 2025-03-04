// Write a program to draw a circle. The radius of circle is to be asked to user.
#include <graphics.h>
#include <stdio.h>
#include <conio.h>

void main() {
    int gd = DETECT, gm;
    int x, y, radius;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Taking user input for circle center and radius
    printf("Enter the center coordinates (x y): ");
    scanf("%d %d", &x, &y);
    printf("Enter the radius of the circle: ");
    scanf("%d", &radius);

    // Draw the circle
    circle(x, y, radius);

    getch(); // Wait for a key press
    closegraph(); // Close graphics mode
}

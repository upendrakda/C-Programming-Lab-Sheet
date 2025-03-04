// Write a program to draw a line.
#include <graphics.h>
#include <conio.h>

void main() {
    int gd = DETECT, gm;
    
    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    // Draw a horizontal line at the center of the screen
    line(100, 200, 400, 200); 

    getch(); // Wait for user input
    closegraph(); // Close the graphics mode
}

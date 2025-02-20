//Write a program that asks three coefficients of a quadratic
//equation and calculate its root.
#include <stdio.h>
#include <math.h>

void main()
{
    float a, b, c, determinant, r1, r2;
    printf("Enter coefficient a: ");
    scanf("%f", &a);
    printf("Enter coefficient b: ");
    scanf("%f", &b);
    printf("Enter coefficient c: ");
    scanf("%f", &c);
    determinant = b * b - 4 * a * c;
    r1 = (-b + sqrt(determinant)) / (2 * a);
    r2 = (-b - sqrt(determinant)) / (2 * a);
    printf("The roots are real and distinct.\n");
    printf("Root 1 = %.2f\n", r1);
    printf("Root 2 = %.2f\n", r2);
}

// Create a union named student that has roll and marks as member. Assign some
// value to those members one at a time and display the result one at a time.
#include<stdio.h>
union student
{
    int roll;
    float marks;
}std;
void main()
{
    std.roll= 72;
    printf("Roll no.: %d",std.roll);
    std.marks= 90;
    printf("\t Marks: %.2f", std.marks);
}
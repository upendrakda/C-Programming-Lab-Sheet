// Design a air line data structure that store the following
//  a)flight number
//  b)Originating airport code
//  c)Destination airport code
//  d)starting time
//  e)arriving time
//Now write a program that prints all the flight information for a specific airport 
//entered by user.
#include<stdio.h>
struct aeroplane
{
    int flightno;
    int orign_air_code;
    int dest_air_code;
    int start_time;
    int arrival_time;
}air;
int main()
{
    printf("Enter flight number:");
    scanf("%d",&air.flightno);
    printf("Enter originating airport code:");
    scanf("%d",&air.orign_air_code);
    printf("Enter destination airport code:");
    scanf("%d",&air.dest_air_code);
    printf("Enter starting time(24 hr format):");
    scanf("%d",&air.start_time);
    printf("Enter arrival time(24 hr format):");
    scanf("%d",&air.arrival_time);

    printf("\nAeroplane schedule:\n");
    printf("Flight Number: %d \nOriginating Airport Code: %d \nDestination Airport Code: %d \nStarting Time: %d \nArrival Time: %d",air.flightno,air.orign_air_code,air.dest_air_code,air.start_time,air.arrival_time);
}
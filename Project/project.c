#include <stdio.h>
#include <stdlib.h>

void lengthConversion();
void weightConversion();
void temperatureConversion();

int main() 
{
    int choice;
    do {
        system("cls");
        printf("Unit Conversion Calculator\n");
        printf("1. Length Conversion\n");
        printf("2. Weight Conversion\n");
        printf("3. Temperature Conversion\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch (choice) 
        {
            case 1: lengthConversion(); break;
            case 2: weightConversion(); break;
            case 3: temperatureConversion(); break;
            case 4: printf("Exiting the program...\n"); break;
            default: printf("Invalid choice! Please try again.\n");
        }
        if (choice != 4) {
            printf("\nPress any key to continue...");
            getchar(); getchar();
        }
    } while (choice != 4);
    
    return 0;
}

void lengthConversion() 
{
    int option;
    float value, result;
    printf("\nLength Conversion:\n");
    printf("1. Meters to Kilometers\n");
    printf("2. Kilometers to Meters\n");
    printf("3. Feet to Meters\n");
    printf("4. Meters to Feet\n");
    printf("Enter your choice: ");
    scanf("%d", &option);
    
    printf("Enter value: ");
    scanf("%f", &value);
    
    switch (option) 
    {
        case 1: result = value / 1000; break;
        case 2: result = value * 1000; break;
        case 3: result = value * 0.3048; break;
        case 4: result = value / 0.3048; break;
        default: printf("Invalid choice!\n"); return;
    }
    printf("Converted value: %.4f\n", result);
}

void weightConversion() 
{
    int option;
    float value, result;
    printf("\nWeight Conversion:\n");
    printf("1. Grams to Kilograms\n");
    printf("2. Kilograms to Grams\n");
    printf("3. Pounds to Kilograms\n");
    printf("4. Kilograms to Pounds\n");
    printf("Enter your choice: ");
    scanf("%d", &option);
    
    printf("Enter value: ");
    scanf("%f", &value);
    
    switch (option) 
    {
        case 1: result = value / 1000; break;
        case 2: result = value * 1000; break;
        case 3: result = value * 0.453592; break;
        case 4: result = value / 0.453592; break;
        default: printf("Invalid choice!\n"); return;
    }
    printf("Converted value: %.4f\n", result);
}

void temperatureConversion() 
{
    int option;
    float value, result;
    printf("\nTemperature Conversion:\n");
    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &option);
    
    printf("Enter value: ");
    scanf("%f", &value);
    
    switch (option) 
    {
        case 1: result = (value * 9 / 5) + 32; break;
        case 2: result = (value - 32) * 5 / 9; break;
        default: printf("Invalid choice!\n"); return;
    }
    printf("Converted value: %.2f\n", result);
}
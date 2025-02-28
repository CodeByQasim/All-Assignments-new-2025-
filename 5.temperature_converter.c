#include<stdio.h>
#include<conio.h>
void main() {
    float temperature, convertedTemperature;
    char unit;


    printf("Enter temperature using these unit (C for Celsius, F for Fahrenheit): ");
    scanf("%f %c", &temperature, &unit);

    
    if (unit == 'C' || unit == 'c') {
        
        convertedTemperature = (temperature * 9/5) + 32;
        printf("%f C = %f F\n", temperature, convertedTemperature);
    } 
	else if (unit == 'F' || unit == 'f') {

        convertedTemperature = (temperature - 32) * 5/9;
        printf("%f F = %f C\n", temperature, convertedTemperature);
    } 
	else {
    
        printf("Invalid unit! Please use 'C' for Celsius or 'F' for Fahrenheit.\n");
    }

    getch();
}


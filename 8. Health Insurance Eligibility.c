#include <stdio.h>
#include<conio.h>
void main() {
    int age;
    char seriousIllness;

    printf("Enter your age: ");
    scanf("%d", &age);
    
    printf("Have you had any serious illness (Y/N): ");
    scanf(" %c", &seriousIllness);  // Adding space before %c to catch any previous newline character

    //checking if a person is eligible
    if (age > 18) {
        if (age > 45) {
            
            if (seriousIllness == 'Y' || seriousIllness == 'y') {
                printf("You are not eligible for health insurance due to serious illness.\n");
            } else {
                printf("You are eligible for health insurance.\n");
            }
        } else {
            // If age is  19 and 45, eligible for health insurance
            printf("You are eligible for health insurance.\n");
        }
    } else {
        // If age is 18 or below, not eligible for health insurance
        printf("You are not eligible for health insurance as you are below 18.\n");
    }

    getch();
}


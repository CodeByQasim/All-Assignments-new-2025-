#include <stdio.h>
#include <string.h>

float calculateTrainFare(char class[], float distance) {
    if (strcmp(class, "Economy") == 0 || strcmp(class, "economy") == 0) {
        return (5.0 * distance);  
    } else if (strcmp(class, "Business") == 0 || strcmp(class, "business") == 0) {
        return  (10.0 * distance); 
    } else if (strcmp(class, "First") == 0 || strcmp(class, "first") == 0) {
        return (15.0 * distance);  
    } else {
        printf("Invalid class\n");
        return -1; 
    }
   
}

void main() {
    char class[20];
    float distance, fare;


    printf("Enter class (Economy, Business, First): ");
    scanf("%s", class);
    printf("Enter distance in km: ");
    scanf("%f", &distance);
    
    fare = calculateTrainFare(class, distance);

    if (fare != -1) {
        printf("Fare = %.2f PKR\n", fare);
    }

    
}


#include <stdio.h>

int main() {
    int steps[24];
    int i,totalSteps = 0;
    float averageSteps = 0.0;
    int maxSteps = 0, minSteps = 0;
    int maxHour = 0, minHour = 0;
    int inactivity = 0;

    // Input the number of steps for each hour
    for ( i = 0; i < 24; i++) {
        printf("Enter steps for hour %d: ", i);
        scanf("%d", &steps[i]);
        totalSteps += steps[i];
        
        // Check for inactivity
        if (steps[i] == 0) {
            inactivity = 1;
        }
        
        // Find the hour with the maximum and minimum steps
        if (i == 0 || steps[i] > maxSteps) {
            maxSteps = steps[i];
            maxHour = i;
        }
        if (i == 0 || steps[i] < minSteps) {
            minSteps = steps[i];
            minHour = i;
        }
    }

    averageSteps = totalSteps / 24.0;

    // Display results
    printf("\nTotal steps taken in the day: %d\n", totalSteps);
    printf("Average steps per hour: %.2f\n", averageSteps);
    printf("Hour with maximum steps: %d (Steps: %d)\n", maxHour, maxSteps);
    printf("Hour with minimum steps: %d (Steps: %d)\n", minHour, minSteps);

    if (inactivity) {
        printf("There was at least one hour with no steps recorded (inactivity).\n");
    } else {
        printf("No hours with zero steps recorded.\n");
    }

    return 0;
}


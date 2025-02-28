#include <stdio.h>

int main() {
    float temperatures[30];
    float sum = 0.0;
    float average, highest, lowest;
    int hotDays[30];
    int hotDaysCount = 0;
    int i;

    for (i = 0; i < 30; i++) {
        printf("Enter the temperature for day %d: ", i + 1);
        scanf("%f", &temperatures[i]);
        sum += temperatures[i];
    }

    average = sum / 30;
    highest = temperatures[0];
    lowest = temperatures[0];

    for (i = 1; i < 30; i++) {
        if (temperatures[i] > highest) {
            highest = temperatures[i];
        }
        if (temperatures[i] < lowest) {
            lowest = temperatures[i];
        }
    }


    printf("\nAverage Monthly Temperature: %.2f°C\n", average);
    printf("Highest Temperature Recorded: %.2f°C\n", highest);
    printf("Lowest Temperature Recorded: %.2f°C\n", lowest);


    printf("\nDays with temperatures above average and hot days (above 35°C):\n");
    for (i = 0; i < 30; i++) {
        if (temperatures[i] > average) {
            printf("Day %d: %.2f°C (Above Average", i + 1, temperatures[i]);
            if (temperatures[i] > 35) {
                printf(", Hot Day)");
            }
            printf("\n");
        }
    }

    return 0;
}


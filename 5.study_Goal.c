#include <stdio.h>

int main() {
    float studyHours[7];
    float totalHours = 0.0;
    float weeklyGoal = 35.0;
    int i;
    for (i = 0; i < 7; i++) {
        printf("Enter study hours for day %d: ", i + 1);
        scanf("%f", &studyHours[i]);
        totalHours += studyHours[i];
        if (studyHours[i] > 10) {
            printf("Warning: Burnout Alert! You studied for more than 10 hours on day %d.\n", i + 1);
        }
    }

    printf("\nTotal study hours for the week: %.2f\n", totalHours);

    if (totalHours >= weeklyGoal) {
        printf("Great job! You met your weekly study goal of %.2f hours!\n", weeklyGoal);
    } else {
        printf("You fell short of your goal. Keep going, try to study more next week!\n");
    }

    return 0;
}


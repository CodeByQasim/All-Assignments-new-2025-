#include <stdio.h>
#include <string.h>
void showLoadSheddingSchedule(char city[]) {
    printf("\nLoad Shedding Schedule for %s:\n", city);

    if (strcmp(city, "Karachi") == 0) {
        printf("Monday: 6 AM - 8 AM, 6 PM - 8 PM\n");
        printf("Tuesday: 7 AM - 9 AM, 5 PM - 7 PM\n");
        printf("Wednesday: 6 AM - 8 AM, 6 PM - 8 PM\n");
        printf("Thursday: 7 AM - 9 AM, 5 PM - 7 PM\n");
        printf("Friday: 6 AM - 8 AM, 6 PM - 8 PM\n");
        printf("Saturday: 7 AM - 9 AM, 5 PM - 7 PM\n");
        printf("Sunday: 6 AM - 8 AM, 6 PM - 8 PM\n");
    }
    else if (strcmp(city, "Lahore") == 0) {
        printf("Monday: 7 AM - 9 AM, 5 PM - 7 PM\n");
        printf("Tuesday: 8 AM - 10 AM, 6 PM - 8 PM\n");
        printf("Wednesday: 7 AM - 9 AM, 5 PM - 7 PM\n");
        printf("Thursday: 8 AM - 10 AM, 6 PM - 8 PM\n");
        printf("Friday: 7 AM - 9 AM, 5 PM - 7 PM\n");
        printf("Saturday: 8 AM - 10 AM, 6 PM - 8 PM\n");
        printf("Sunday: 7 AM - 9 AM, 5 PM - 7 PM\n");
    }
    else if (strcmp(city, "Islamabad") == 0) {
        printf("Monday: 8 AM - 10 AM, 5 PM - 7 PM\n");
        printf("Tuesday: 9 AM - 11 AM, 6 PM - 8 PM\n");
        printf("Wednesday: 8 AM - 10 AM, 5 PM - 7 PM\n");
        printf("Thursday: 9 AM - 11 AM, 6 PM - 8 PM\n");
        printf("Friday: 8 AM - 10 AM, 5 PM - 7 PM\n");
        printf("Saturday: 9 AM - 11 AM, 6 PM - 8 PM\n");
        printf("Sunday: 8 AM - 10 AM, 5 PM - 7 PM\n");
    }
    else {
        printf("Sorry, no schedule available for the city %s.\n", city);
    }
}

int main() {
    char city[50];

    printf("Enter your city (e.g., Karachi, Lahore, Islamabad): ");
    scanf("%s", city);

    showLoadSheddingSchedule(city);

    return 0;
}


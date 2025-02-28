#include <stdio.h>

int main() {
    float dailyExpenses[7];
    float totalSpending = 0.0;
    float averageSpending;
    float dailyBudgetLimit;
    float overspentAmount;
    int i;

    printf("Enter your daily budget limit: ");
    scanf("%f", &dailyBudgetLimit);
    

    for (i = 0; i < 7; i++) {
        printf("Enter the spending for day %d: ", i + 1);
        scanf("%f", &dailyExpenses[i]);
        

        totalSpending += dailyExpenses[i];
    }

    averageSpending = totalSpending / 7;
    

    printf("\nTotal weekly spending: %.2f\n", totalSpending);
    printf("Average daily spending: %.2f\n", averageSpending);
    

    printf("\nDays with overspending:\n");
    for ( i = 0; i < 7; i++) {
        if (dailyExpenses[i] > dailyBudgetLimit) {
            overspentAmount = dailyExpenses[i] - dailyBudgetLimit;
            printf("Day %d: Overspent by %.2f\n", i + 1, overspentAmount);
        }
    }

    
    if (totalSpending > (dailyBudgetLimit * 7)) {
        printf("\nYou have exceeded your total budget for the week by %.2f.\n", totalSpending - (dailyBudgetLimit * 7));
    } else {
        printf("\nYou stayed within your budget for the week.\n");
    }

    return 0;
}


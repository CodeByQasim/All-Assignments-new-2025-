#include <stdio.h>
#include<conio.h>

int main() 
{
    int monthly_income;
    char has_existing_loan, overdue_payment;

    printf("Enter your monthly income: ");
    scanf("%d", &monthly_income);

    if (monthly_income >= 30000) {
        printf("Do you have an existing loan? (Y/N): ");
        scanf(" %c", &has_existing_loan);  //added space before %c 

        // Check if they have an existing loan
        if (has_existing_loan == 'Y' || has_existing_loan == 'y') {
            
            printf("Do you have any overdue payments on your loan? (Y/N): ");
            scanf(" %c", &overdue_payment);   //added space before %c 

            // If they have overdue payments, they are ineligible
            if (overdue_payment == 'Y' || overdue_payment == 'y') {
                printf("Loan application denied. You have overdue payments.\n");
            } else {
                printf("Loan application approved.\n");
            }
        } else {
            printf("Loan application approved.\n");
        }
    } else {
        // If income is less than 30,000, they are ineligible
        printf("Loan application denied. Your monthly income is below 30,000.\n");
    }
getch();
}


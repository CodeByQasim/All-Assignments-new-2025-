#include<stdio.h>
#include<conio.h>
void main() {
    
    float balance, withdrawal_amount;
    char permit;

    
    printf("Enter your account balance: ");
    scanf("%f", &balance);
    printf("Enter the withdrawal amount: ");
    scanf("%f", &withdrawal_amount);

    
    if (balance >= withdrawal_amount) {
        
        if (withdrawal_amount > 10000) {
            
            printf("The withdrawal amount is more than 10,000. Do you have a special withdrawal permit? (Y/N): ");
            scanf(" %c", &permit); 

           
            if (permit == 'Y' || permit == 'y') {
                printf("Withdrawal approved with special permit.\n");
            } else {
                printf("Withdrawal denied. Special permit is required for withdrawals above 10,000.\n");
            }
        } else {
            
            printf("Withdrawal approved.\n");
        }
    } else {
    
        printf("Insufficient balance. Withdrawal denied.\n");
    }
getch();
}


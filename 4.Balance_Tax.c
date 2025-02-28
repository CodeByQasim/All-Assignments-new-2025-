#include <stdio.h>

float remainingBalance(float amount) {
    float FED_rate = 0.195;          
    float serviceCharge_rate = 0.10; 
    float FED_deduction = amount * FED_rate;
    float serviceCharge_deduction = amount * serviceCharge_rate;

    float remaining = amount - (FED_deduction + serviceCharge_deduction);

    return remaining;
}

int main() {
    float amount, balance;
    printf("Enter recharge amount (in PKR): ");
    scanf("%f", &amount);
    balance = remainingBalance(amount);
    printf("Available Balance = %.2f PKR\n", balance);

    return 0;
}


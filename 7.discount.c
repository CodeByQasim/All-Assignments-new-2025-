#include<stdio.h>
#include<conio.h>
void main(){
	float shoppingamount, discount, amount_final;
	
	printf("Enter the Total Shopping Amount ::");
	scanf("%f",&shoppingamount);
	
	 if (shoppingamount > 5000) {
        discount = 0.20;
        amount_final = shoppingamount - (shoppingamount * discount);
        printf("Final amount after discount: %f\n", amount_final);
    } 
	else if (shoppingamount >= 3000) {
        discount = 0.10; 
        amount_final = shoppingamount - (shoppingamount * discount);
        printf("Final amount after discount: %f\n", amount_final);
    } 
	else {
        discount = 0.0;
		amount_final = shoppingamount - (shoppingamount * discount); 
		printf("Final amount after discount: %f\n", amount_final); 
    }

	getch();
}

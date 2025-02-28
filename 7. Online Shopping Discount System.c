#include<stdio.h>
#include<conio.h>
void main(){
	float shopping_amount, final_amount;
	char member;
	
	printf("Enter the Purchasing Amount :: ");
	scanf("%f", &shopping_amount);

	printf("Are you a Member? y/n");
	scanf(" %c", &member);// Adding space before %c to catch any previous newline character
	
	if(shopping_amount > 2000) {
		if(member == 'y' || member == 'Y'){
			final_amount = shopping_amount * 0.80;
		}else{
		     final_amount = shopping_amount * 0.90;	
		}
	}else{
		final_amount = shopping_amount;
	}
	printf("Final Amount to pay after Discount is Rs:%f", final_amount);
	
	getch();
	
}

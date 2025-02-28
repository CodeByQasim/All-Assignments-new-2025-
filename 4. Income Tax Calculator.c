#include<stdio.h>
#include<conio.h>

void main(){
	float income_tax;
	
	printf("Please Enter your Income :: ");
	scanf("%f", &income_tax);
	
	if(income_tax <= 250000){
		printf("you have to Pay NO TAX ::");
	}
		else if(income_tax > 250000){
			if(income_tax <= 500000){
			
			float tax_per = income_tax * 0.05;
			 
		printf("you have to Pay %f TAX", tax_per);
	}
	else if(income_tax <= 1000000){
			
			float tax_per = income_tax * 0.10;
			 
		printf("you have to Pay %f TAX", tax_per);
	}
	else{
			
			float tax_per = income_tax * 0.15;
			 
		printf("you have to Pay %f TAX", tax_per);
	}
}
    else {
    	printf("you have to pay no tax");
	}
	getch();
	
}

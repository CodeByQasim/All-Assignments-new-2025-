#include <stdio.h>
float annual_tax(int salary){
	float tax;
	int annual = salary * 12;
	if(annual > 3600000){
		tax = (annual*30)/100;
	}else if(annual < 3600000 && annual > 2400000){
		tax = (annual*20)/100;
	}else if(annual < 2400000 && annual > 1200000){
		tax = (annual*12.5)/100;
	}else if(annual < 1200000 && annual > 600000){
		tax = (annual*2.5)/100;
	}else{
		tax = 0;
	}
	return tax;
}
void main(){
	int salary;
	printf("Enter your Monthly salary :: ");
	scanf(" %d",&salary);
	printf("The Annual Tax is %.2f PKR",annual_tax(salary));
}

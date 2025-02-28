#include <stdio.h>
#include <conio.h>
float calculateBill(int units){

	if(units <= 100){
		units*=18;
	}
	else if(units > 100 && units <= 200){
		units*=22;
	}
	else if(units > 200 && units <= 300){
	    units*=26;
	}
	else if(units > 300 && units <= 700){
		units*= 30;
	}else{
		units*= 35;
	}
	return units;
}
void main(){
	int units;
	printf("Enter the Consumed unit :: ");
	scanf("%d",&units);
    printf("Your Electricity Bill is %.2f",calculateBill(units));
	
	getch();
}

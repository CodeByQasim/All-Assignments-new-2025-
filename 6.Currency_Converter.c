#include <stdio.h>
float convertCurrency(float amount, char currencyType){
	if(currencyType == 'U' || currencyType == 'u'){
		return (280 * amount);
	}else if(currencyType == 'S' || currencyType == 's'){
		return (75* amount);	
	}else if(currencyType == 'A' || currencyType == 'a'){
		return (76* amount);	
	}else{
		printf("Invalid Input :: ");
	}
} 
void main(){
	float amount;
	char currencyType;
	printf("Enter the amount :: ");
	scanf("%f",&amount);
	printf("Enter the Type Of Currency (U for USD, S for SAR, A for AED): ");
	scanf(" %c",&currencyType);
	
	printf("PKR :: %.2f",convertCurrency(amount, currencyType));
	
	
}

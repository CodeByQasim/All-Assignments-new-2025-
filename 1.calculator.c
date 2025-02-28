#include<stdio.h>
#include<conio.h>
int main(){
	float num1, num2;
	char operater;
	printf("Enter the two Numbers and an Arithmetic Operation (+, -, *, /) :: ");
	scanf("%f%c%f",&num1,&operater,&num2);
	

	
	if(operater == '+'){
		printf("The sum of num1 and num2 = %f",num1+num2);
	}
	else if(operater == '-'){
		printf("The difference of num1 and num2 = %f",num1-num2);
	}
	else if(operater == '*'){
		printf("The product of num1 and num2 = %f",num1*num2);
	}
	else if(operater == '/'){
		printf("The quotient of num1 and num2 = %f",num1/num2);
	}
	else{
		printf("INVALID STATEMENT");
	}
	getch();
	
}

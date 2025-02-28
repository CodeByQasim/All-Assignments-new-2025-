#include<stdio.h>
#include<conio.h> 
void main(){
	int num1, num2, num3;
	
	printf("Enter the 1st Number :: ");
	scanf("%d",&num1);
	
	printf("Enter the 2nd Number :: ");
	scanf("%d",&num2);
	
	printf("Enter the 3rd Number :: ");
	scanf("%d",&num3);
	
	if(num2&&num3 < num1){
		printf("The Greater Number is :: %d",num1);
	}
	else if(num1&&num3 < num2){
		printf("The Greater Number is :: %d",num2);
	}
	else if(num1&&num2 < num3){
		printf("The Greater Number is :: %d",num3);
	}
	else{
	    printf("These Numbers are equal ");
	}
	
	getch();
	
}

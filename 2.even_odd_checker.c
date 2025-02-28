#include<stdio.h>
#include<conio.h>
void main()
{
	int num;
	
	printf("Enter a number :: ");
	scanf("%d",&num);
	
	 printf("Your number is %d \n",num);
	 
	 if(num%2 == 0){
	 	printf("You entered an Even Number ::");
	 }
	 else
	 {
	 	printf("You entered an Odd number ::");
	 }
	 
	 
	 getch();
	 
	
}

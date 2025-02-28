#include<stdio.h>
#include<conio.h>
void main()
{
	float principal, rate, time;
	
	printf("Enter the Principal Amount :: ");
	scanf("%f",&principal);
	
     printf("Enter the Rate of Interest :: ");
	scanf("%f",&rate);
	
	printf("Enter the Time (in years) :: ");
	scanf("%f",&time);
	
	printf("The Simple Interest is %f ",(principal*rate*time)/100);
	
	getch();
}

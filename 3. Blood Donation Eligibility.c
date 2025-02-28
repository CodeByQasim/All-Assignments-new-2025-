#include<stdio.h>
#include<conio.h>
void main()
{
	int age, weight;
	
	printf("Please Enter Your AGE :: ");
	scanf("%d",&age);
	
	printf("Please Enter Your Weight :: ");
	scanf("%d",&weight);
	
	if(age >= 18)
	{
		if(weight >= 50){
			printf("You Are Elegible For Donating your Blood :: ");
		}else{
			printf("You Are Not Elegible for Donating Your Blood :: ");
		}
	}else{
			printf("You Are Not Elegible for Donating Your Blood :: ");
		}
	
	getch();
}

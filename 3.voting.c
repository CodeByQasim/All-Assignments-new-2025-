#include<stdio.h>
#include<conio.h>
void main()
{
	int age ; 
	printf("Enter Your Age ::\n");
	scanf("%d",&age);
	
   if(age >= 18){
   	printf("You are Elagible for Voting");
   }
   
   else{
   	printf("You Are Not Elagible For Voting");
   }
   
   getch();
}


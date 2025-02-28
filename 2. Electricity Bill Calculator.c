#include<stdio.h>
#include<conio.h>
void main()
{
	int unit;
	printf("Enter your consumed units ::");
	scanf("%d",&unit);
	
	if(unit >= 100){
	   if(unit >= 100 && unit <= 200){
		   int unit1 = unit * 5;
		   printf("You have to pay Rs %d ",unit1);
	     }
    	  else if(unit > 200 && unit <= 300){
		  int unit2 = unit * 8;
		   printf("You have to pay Rs %d ",unit2);
	}

	      else{
		   int unit3 = unit * 10;
		    printf("you have to pay Rs %d ",unit3);
	}
	
     }else{
	printf("You have to pay NO Charge");
	
    }
getch();
}

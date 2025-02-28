#include<stdio.h>
#include<conio.h>
void main(){
	float marks;
	
	printf("Please Enter your Obtained marks in Three Subject:: ");
	scanf("%f", &marks);
	
	float percentage = (marks*100)/300;
	printf("Your percentage is %f\n",percentage);
	
	if(percentage >= 50){
		if(percentage >= 75){
			printf("You Got A Grade::");
		}else{
			printf("You Got B Grade::");
		}
	}else{
		printf("You are Fail!");
	}
	
	
	getch();
}

#include<stdio.h>
#include<conio.h>
void main(){
	int math, science;
	printf("Enter your Marks  of Mathematics ::");
	scanf("%d",&math);
	
	printf("Enter your Marks of Science ::");
	scanf("%d",&science);
	
	float sum = math+science;
	float percentage = (sum/200)*100; 
	
	if(percentage >= 50){
		printf("You are Elegible for admission ::\n");
		
		if(percentage >= 80){
			printf("Congratulation!! you are qualified for Scholarship ::");
		}else{
			printf("Sorry!! you are not qualified for Scholarship ::");
		}
				
	}
	else{
		printf("Sorry!! you are not Elegible For Admission ::");
	}
	
	getch();
}

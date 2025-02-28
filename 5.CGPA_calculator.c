#include <stdio.h>
#include <conio.h>
float calculateGPA(int marks){
	if(marks >= 85){
		printf("GPA = 4.0");
	}else if(marks >= 80 && marks <85){
		printf("GPA = 3.5");
	}else if(marks >= 70&& marks <79){
		printf("GPA = 3.3");
	}else if(marks >= 65 && marks <69){
		printf("GPA = 3.0");
	}else if(marks >= 65 && marks <69){
		printf("GPA = 2.7");
    }else if(marks >= 60 && marks <65){
		printf("GPA = 2.3");
    }else{
    	printf("FAIL..!!");
	}
}
void main(){
	int marks;
	printf("Enter the Marks in Percentage :: ");
	scanf("%d",&marks);
	
	calculateGPA(marks);
	
	
	
}

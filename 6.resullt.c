#include<stdio.h>
#include<conio.h>
void main()
{
	int math, english, computer;
	printf("Your obtained marks in math subject ::");
	scanf("%d", &math);
	printf("Your obtained marks in english subject ::");
	scanf("%d", &english);
	printf("Your obtained marks in computer subject ::");
	scanf("%d", &computer);
	
	
	float obtainedmarks = math+english+computer;
	float percentage = (obtainedmarks/300)*100;
	printf("%f percentage\n",percentage);
	
	if(percentage>=90)
	{
		printf("your grade is A\n");
	}else if(percentage>=80)
	{
		printf("your grade is B\n");
	}
	else if(percentage>=70)
	{
		printf("your grade is C\n");
    }
	else if(percentage>=60)
	{
		printf("your grade is D\n");
}
else{
	printf("(F) FAIL ");
}

	
	
	getch();
	
}

#include <stdio.h>
#include <conio.h>
#include <string.h>
void main(){
	char name[4];
	int pass;
	char username[] = "admin";
	printf("Please Enter the Username :: ");
	scanf(" %s",&name);
	printf("Please Enter the Password :: ");
	scanf("%d",&pass);
	
	if(strcmp(name,username) == 0){
		if (pass == 1234){
			printf("Login successfull :: ");
		}else{
			printf("Login Failed ");
		}
	}else{
		printf("Login Failed ");
	}
	
}

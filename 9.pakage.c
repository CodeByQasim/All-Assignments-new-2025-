
#include<stdio.h>
#include<conio.h>
int pakage(char network[],int gb ){
	if(network[0] == 'z' || network[0] == 'Z'  && network[1] == 'o' || network[1] == 'O' && network[2] == 'n' || network[2] == 'N' && network[3] == 'g' || network[3] == 'G'&& network[4] == '\0'){
		return gb * 100;
	}
	else if(network[0] == 'j' || network[0] == 'J'  && network[1] == 'a' || network[1] == 'A' && network[2] == 'z' || network[2] == 'Z' && network[3] == 'z' || network[3] == 'Z'&& network[4] == '\0'){
		return gb * 120;
	}
	if(network[0] == 'T' || network[0] == 't'  && network[1] == 'e' || network[1] == 'E' && network[2] == 'L' || network[2] == 'l' && network[3] == 'e' || network[3] == 'E' && network[4] == 'n' || network[4] == 'N'  && network[5] == 'o' || network[5] == 'O'  && network[6] == 'r' || network[6] == 'R'&& network[7] == '\0' ){
		return gb * 80;
	}
	
}

void main(){
	int gb;
	char network[10];
	
	printf("Enter the network [jazz, zong, telenor]::  ");
	scanf(" %s", network);
	printf("Enter the GB :: ");
	scanf("%d", &gb);
	
	printf("value is Rs :: %d",pakage(network, gb));
	
	
	
}

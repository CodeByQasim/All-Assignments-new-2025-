#include<stdio.h>
#include<conio.h>
float calculateZakat(float totwealth,float gold){
	float goldprice = gold * 87.48;

    float zakat;
	if(totwealth >= goldprice){
		zakat =(totwealth*0.025);
	}
	return zakat;
	
}
void main(){
	float gold;
	int totwealth;
	
	printf("Enter the Total Wealth :: ");
	scanf(" %d",&totwealth);
	printf("Enter the Current 1Gram Gold Price [PKR] :: ");
	scanf(" %f",&gold);

	
	printf("Zakat Payable %.2f",calculateZakat(totwealth,gold));
	
}

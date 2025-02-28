#include <stdio.h>
#include <conio.h>
float calculateFuelCost(float distance, float fuelAverage, float fuelPrice){

    float total = (distance/fuelAverage)*fuelPrice;
    return total;

}
void main(){
	float distance,fuelAverage,fuelPrice;
	printf("Enter the distance in [Km]:: ");
	scanf("%f",&distance);
	printf("Enter the fuelAverage [Km/L] :: ");
	scanf("%f",&fuelAverage);
	printf("Enter the fuelPrice per Litre :: ");
	scanf("%f",&fuelPrice);
    printf("Total price will be Rs:%.2f",calculateFuelCost(distance,fuelAverage,fuelPrice));	
	
}

//Hello World
/*
NAME: GRIFFIN MUTALI
REG NO: PA106/G/28744/25
DESCRIPTION: PROGRAMME TO CALCULATE FARE
*/
#include <stdio.h>
double calculateFare(double distance){
	double rate_per_killometer=50;
	double fare = distance*rate_per_killometer;
	return fare;
}
int main()
{ 
	double distance;
	printf("enter distance traveled (in km): ");
	scanf("%lf",&distance);
	double totalFare=calculateFare(distance);
	printf("Total fare = ksh.%.2f\n",totalFare);
return 0;	
} 
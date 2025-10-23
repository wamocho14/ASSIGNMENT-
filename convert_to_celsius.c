//Hello World
/*
NAME: GRIFFIN MUTALI
REG NO: PA106/G/28744/25
DESCRIPTION: PROGRAMME TO CALCULATE FARE
*/
#include <stdio.h>
double convert_to_Celsius(double fahrenheit)
{
	double celsius=(fahrenheit-32)*5/9;
	return celsius;
}
int main()
{
double fahrenheit;
printf("Enter temperature in Fahrenheit: ");
scanf("%lf", &fahrenheit);

double celsius=convert_to_Celsius(fahrenheit);
printf("Temperature in Celcius = %.2f\n",celsius);	
	return 0;
}
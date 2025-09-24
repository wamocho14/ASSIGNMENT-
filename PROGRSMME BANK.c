//HELLO WORLD
/*
NAME: GRIFFIN MUTALI
REG NO: PA10/28744/25
DSCRIPTION: PROGRAMME FOR A BANK LOAN
*/
#include<stdio.h>
int main ()
{
	int age ;
	float income ;
	
	// prompt user for age//
	printf("Enter your age: ");
 	if (scanf("%d", &age) !=1) {
		 printf("invalid input! Age must be a number.\n");
		 return 1;
	 }
	//prompt user for income//
	printf("Enter your income in Ksh: ");
	if (scanf("%f", &income) !=1){
		printf("Invalid input!Income must be a number");
		return 1;
	}
	
	//check eligibility//
	 
	 if(age >=21 && income >= 21000)
	 	printf("congratulations you qualify for a loan");

	 else
	 {
		 printf("unfortunately we are unable to offer you a loan at this time.");

	 }
	return 0;
}
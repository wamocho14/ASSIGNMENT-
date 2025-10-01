//HELLO WOLRLD
/*
NAME: GRIFFIN MUTALI
REG NO: PA106/G/28744/25
DATE:30/09/2025
DESCRIPTION: PROGRAM TO PROMPT A USER TO ENTER UNITS
*/
 
 #include<stdio.h>
 int main()
 {
 	float unit,bill;
 	printf("enter the number of units consumed: ");
 	scanf("%f", &unit,bill);
 	if (unit<=30)
	 {
	 	printf("Total bill is %f", bill=20*unit);
	 	bill=20*unit;
     }
	 
	  else if (unit>30&&unit<=60)
	 {
	 	printf("Total bill is %f", bill=25*unit);
	 	bill=25*unit;
	 }
	 else if(unit>60)
	 {
	 	printf("Total bill is %f", bill=30*unit);
	 	bill=30*unit;
	 }	
 	
	 
	 return 0;
 }
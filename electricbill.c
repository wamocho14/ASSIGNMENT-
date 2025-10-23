//HELLO WOLRLD
/*
NAME: GRIFFIN MUTALI
REG NO: PA106/G/28744
DESCRIPTION: PROGRAMME TO CALCULATE ELECTRIC BILL
*/
 
 #include<stdio.h>
 	double calculateElecricBill(int units){
	double bill=0.0; 
 	if (units<=100)
	 {
	 	bill=units*10;
	 	
     }
	 
	  else if (units<=200)
	 {
	 	bill=(100*10)+(units-100)*15;

	 }
	 else
	 {
	 	bill=(100*10)+(100*15)+(units-200)*20;	
	 }
	 	return bill;
     }
     int main()
	 {
		int units;
		 	printf("Enter the number of units consumed: ");
 	scanf("%d", &units);
 	double total=calculateElecricBill(units);
 	printf("Total bill= Ksh.%.2f\n",total);
		 return 0;
	 }
 	

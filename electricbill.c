//Hello World
/*
NAME: GRIFFIN MUTALI
REG NO: PA06/G/28744/25
DESCRIPTION: PROGRAMME TO CALCULATE ELECTRIC BILL
*/

#include <stdio.h>
int main()
{
	int unit,bill;
	printf("\nfirst 100 units = Ksh 10 per unit");
	printf("\nnext 100 units = Ksh. 15 per unit");
	printf("\nabove 200 units = Kh. 20 per unit");
	printf();
	if (unit<=100){
	bill=unit*10;
	}
	else if(unit>=100<200){
		bill=unit*15;
	}
	else {
		bill=unit*20;
	}
	
		
	return 0;
}
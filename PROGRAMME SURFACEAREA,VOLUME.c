//HELLO WORLD
/*
NAME: GRIFFIN MUTALI
REG NO: PA106/25/28744/25
DESCRIPTION: PROGRAMME TO FIND THE VOLUME AND SURFACE AREA OF A GIVEN CYLINDER
*/

#include <stdio.h>
#define PI 3.142
int main()
{
	float radius,height,volume,surfacearea;
	printf("enter the radius of the cylinder: ");
	scanf("%f",&radius);
	printf("enter the height of the cylinder: ");
	scanf("%f",&height);
	
    volume=PI*radius*radius*height;    
    surfacearea=2*PI*radius*radius+2*PI*radius*height;
    printf("\nvolume of the cylinder = %.4f",volume);
    printf("\nsurfacarea of the cylinder = %.4f",surfacearea);
	return 0;
	
}
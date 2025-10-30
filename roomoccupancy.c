//HELLO WORLD
/*
NAME: GRIFFIN MUTALI
REG NO: PA106/G/28744/25
DESCRIPTION: PROGRAM FOR ROOM OCCUPANCY (ONE BRANCH)
*/

#include <stdio.h>
int main()
{
	int occupancy[5][10];
	int floor,room;
	int occupied,vacant;
	printf("Enter 1 for occupied and 0 for vacant rooms.\n");
	for(floor = 0; floor<5; floor++)
	{
		printf("Enter data for Floor %d:\n",floor + 1);
		for(room = 0; room<10;room++)
		{
			printf("Room %d (1=occupied,0=vacant):",room+1);
			scanf("%d",&occupancy[floor][room]);
			printf("\n");
		}
		for(floor = 0; floor<5;floor++)
		{
			occupied = 0;
			vacant = 0;
			for(room = 0; room<10; room++);}
			{
			if(occupancy[floor][room]==1)
			{
				occupied++;
			}	
			else 
			{
				vacant++;
			}
			
		}
		printf("Floor %d: Occupied = %d,vacant = %d\n",floor + 1, occupied,vacant);
	}
	return 0;
	}	
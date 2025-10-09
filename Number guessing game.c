/*Name: Griffin Mutali
REG NO: PA106/G/28744/25
ASSIGNMENT WEEK 4: Number Guessing Game*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
	int guess, number, attempts = 0;
	// Generate random number between 1 and 20
	
	srand(time(0));
	number = rand()% 20 + 1;
	// prompt user to guess the number//
	printf("Guess the number between 1 and 20: \n");
	
	while(1){
		printf("Enter your guess: ");
		scanf("%d",& guess);
		attempts++;
		if(guess > number){
			printf("Too High!\n");}
		else if(guess < number ){
		
			printf("Too Low!\n");}
		else{
			printf("Congratulations!you guessed the number in %d attempts.\n",attempts);
		break;}
	}
	return 0;
	
}
// zahleingabe.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "stdio.h"
#include "time.h"
#include <stdlib.h>

int main(void)
{
	int add;
	add = 0;
	int i; /*Ein ganzzahliger Datentyp */
	i = 0;
	srand(time(NULL));
	int z = (rand() % 100) + 1;
	printf("**********************************\n");
	printf("*Guess a number between 1 and 100*\n");
	printf("**********************************\n");
	while (i != z)
	{
		printf("Please enter a number: ");
		scanf_s("%d",&i); /* Wartet auf eine Eingabe */
		printf("You entered the following number %d\n", i);
		
		/* check the boolean condition */
		if (i < z) {
			/* if condition is true then print the following */
			printf("i is less than the number you have to guess\n");
			add = add + 1;
		}
		else {
			/* if condition is false then print the following */
			printf("i is greater than the number you have to guess\n");
			add = add + 1;
		}
	}
	printf("You guessed the correct number! ");
	printf("Your number of tries: %d\n", add);
    return 0;
	
}


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid passwords
 * Return: 0
 */
int main(void)
{
	int maxChar = 126; //Max char in ASCII
	int minChar = 33; //Min char in ASCII
	int maxBit = 2772; //Exact bitsize length for password
	
	srand(time(NULL)); //Setting the seed according to time
	int randChar = rand() % maxChar; //Outputs a random num
	while (maxBit > 0){
		while ((randChar < minChar || maxBit - randChar < 33) && maxBit >= 127)
			randChar = rand() % maxChar;
		if (maxBit <= 126)
			randChar = maxBit;
		putchar(randChar);
		maxBit -= randChar;
		randChar = rand() % maxChar;
	}
	
	return (0);
}	

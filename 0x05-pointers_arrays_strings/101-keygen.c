#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Generates random valid passwords
 * Return: 0
 */
int main(void)
{
	int maxChar = 126;
	int minChar = 33;
	int maxBit = 2772;
	
	srand(time(NULL));
	int randChar = rand() % maxChar;
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

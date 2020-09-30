#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int password()
{
	int maxChar = 126; //Max char in ASCII
	int minChar = 33; //Min char in ASCII
	int maxBit = 2772; //Exact bitsize length for password
	
	srand(time(NULL)); //Setting the seed according to time
	int randChar = rand() % maxChar; //Outputs a random num
	//printf("maxBit: %d, randChar: %d\n", maxBit, randChar);
	while (maxBit > 0){
		while ((randChar < minChar || maxBit - randChar < 33) && maxBit >= 127)
			randChar = rand() % maxChar;
		if (maxBit <= 126)
			randChar = maxBit;
		putchar(randChar);
		maxBit -= randChar;
		randChar = rand() % maxChar;
		//printf("\nmaxBit: %d, randChar: %d\n", maxBit, randChar);
	}
	
	//printf("\nEnding\nmaxBit: %d, randChar: %d\n", maxBit, randChar);
	return (0);
}	
int main()
{
	password();
	return(0);
}

#include <stdio.h>
// Inject this script to win
int count = 0;
int rand()
{
	printf("Count: %d\n", count);
	count += 1;
	return (count);
}

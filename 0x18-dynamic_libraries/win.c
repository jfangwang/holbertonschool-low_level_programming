#include <stdio.h>
// Inject this script to win
int count = 0;
int c = 200;

int rand()
{
	count += 1;
	printf("Count) %d\n", count);
	if (count == 1)
		return (8);
	else if (count == 2)
		return (8);
	else if (count == 3)
		return (7);
	else if (count == 4)
		return (9);
	else if (count == 5)
		return (23);
	else if (count == 6)
		return (74);
	else
		return (0);
}

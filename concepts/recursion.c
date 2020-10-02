#include <stdio.h>
/*
 * This is a list of function inspired from tasks I came across 
 * and showcases how recursion is used for a desired output. There
 * are two rules you should consider before using recursion:
 *
 * 1) If you need to go to the base case and backtrack
 * 2) If you are dealing with nodes and trees
 *
 * "To understand recursion, you need to understand stacks"
 * 
 * Recursion is not scary, it is overrated
 * It is basically a for loop with a stack
 * When a function calls itself, the code below the call
 * does not execute until it receives a return value
 */
int printnum(int a)
{
	if (a < 0)
	{
		if (a > -10)
		{
			putchar('-');
			putchar(((a % 10) * -1) + '0');
		}
		else
		{
			printnum(a/10);
			putchar(((a % 10) * -1) + '0');
		}
	}
	else if (a > 0)
	{
		if (a < 10)
			putchar(a % 10 + '0');
		else
		{
			printnum(a/10);
			putchar(a % 10 + '0');
		}
	}
	else
		putchar('0');
}
int printnum2(int n){
	if (n < 0){
		putchar('-'); //prints out negative sign 
		n *= -1; //already printed out the - and turn it positive
	}
	if (n / 10 > 0) //if there is still a digit, run printnum2 recursively
		printnum2(n / 10); //recursion, calls itself
	putchar(n % 10 + '0'); //THIS LINE AND BELOW DOES NOT EXECUTE UNTIL IT GETS A RETURN VALUE FROM THE LINE ABOVE
}
int fib(int n){
	//Calculates to the nth fib sequence starting from 0
	if(n <= 1)
		return n;
	return fib(n-1) + fib(n-2);
}
int main(){
	//printnum2(-123);
	int f = fib(9);
	printf("%d", f);
	putchar('\n');
	return (0);
}

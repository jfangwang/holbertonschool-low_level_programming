#include <stdio.h>
int main(void){
	int *p = 0; //Initializing a pointer pointing to nothing
	int num = 0; //A simple int nothing related to the pointer
	p = &num;
	printf("%p", p);
	return(0);
}

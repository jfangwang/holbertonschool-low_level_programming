#include <stdio.h>
char *countchar(char *dest, char *src, int n){
	int a = 0;
	int b = 0;
	int c = 0;
	while (dest[a] != '\0')
		a++;
	while (src[b])
		b++;
	while (c < n){
		dest[a] = src[c];
		a++;
		c++;
	}
	return (dest);
}
int main(){
	char s1[98] = "Hello ";
	char s2[] = "World\n";
	char *p;
	p = countchar(s1, s2, 1);
	printf("%s", p);
	p = countchar(s1, s2, 1024);
	printf("%s", p);
	return (0);
}

#include "lists.h"
/**
*premain - executes before main while compiler is setting up env variables,
*initialize or uninitilize variable before executing main().
*/
void __attribute__((constructor)) premain()
{
printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n"
);
}

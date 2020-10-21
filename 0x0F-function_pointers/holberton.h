#ifndef HOLBERTON_H
#define HOLBERTON_Hvoid print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
urns the sum of a and b. Prototype: int op_add(int a, int b);
urns the difference of a and b. Prototype: int op_sub(int a, int b);
urns the product of a and b. Prototype: int op_mul(int a, int b);
urns the result of the division of a by b. Prototype: int op_div(int a, int b);
urns the remainder of the division of a by b. Prototype: int op_mod(int a, int b);
int (*get_op_func(char *s))(int, int);
#endif

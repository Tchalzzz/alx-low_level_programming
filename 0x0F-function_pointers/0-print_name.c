#include "function_pointers.h"
/**
 * print_name - a function
 * @f: a function pointer
 * @name: data pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

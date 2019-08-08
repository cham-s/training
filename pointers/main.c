#include <stdlib.h>
#include <stdio.h>

int main()
{
	int a = 12;
	int *address_of_a = &a;
	int **address_of_address_of_a = &address_of_a;

	printf("deref addr of a: %d\n \
			deref addr of addr of a: %p\n \
			deref what is inside add of add: %d\n",
		   	*address_of_a,
			(void *) *address_of_address_of_a,
			**address_of_address_of_a);

	return (0);
}

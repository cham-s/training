#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}

int main()
{
	int a = 4;
	int b = 2;

	printf("a: %d b: %d\n", a, b);
	ft_swap(&a, &b);
	printf("a: %d b: %d\n", a, b);
	return (0);

}


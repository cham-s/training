#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

int main()
{
	int div;
	int mod;

	ft_div_mod(4, 2, &div, &mod);

	printf("div: %d mod: %d\n", div, mod);
	return (0);

}


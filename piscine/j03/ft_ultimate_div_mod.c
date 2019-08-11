#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int tmp_a = *a / *b;
	int tmp_b = *a % *b;
	*a = tmp_a;
	*b = tmp_b;
}

int main()
{
	int div = 4;
	int mod = 2;

	ft_ultimate_div_mod(&div, &mod);

	printf("div: %d mod: %d\n", div, mod);
	return (0);

}


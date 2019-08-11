#include <stdio.h>
#include <stdlib.h>

void	ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int n;
	int *o = &n;
	int **t = &o;
	int ***z = &t;
	int ****r = &z;
	int *****q = &r;
	int ******b = &q;
	int *******p = &b;
	int ********v = &p;
	int *********h = &v;

	ft_ultimate_ft(h);
	printf("%d\n", n);

	return (0);

}


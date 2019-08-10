#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	int is_min = n == -2147483648;
	if (n < 0)
	{
		ft_putchar('-');
		if (is_min)
			n = 214748364;
		else
			n = -n;
	}
	if (n <= ('9' - '0'))
		ft_putchar('0' + n);
	else
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
	if (is_min)
		ft_putchar('8');
}

int		main()
{
	ft_putnbr(-2147483648);
	ft_putchar('\n');
	ft_putnbr(2147483647);
	ft_putchar('\n');
	ft_putnbr(45);
	ft_putchar('\n');
	return (0);
}

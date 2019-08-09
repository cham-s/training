#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		n = -n;
	}
	if (n <= ('9' - '0'))
		ft_putchar('0' + n);
	else
	{
		ft_putnbr(n/10);
		ft_putnbr(n%10);
	}
}

int		main()
{
	ft_putnbr(4);
	ft_putchar('\n');
	ft_putnbr(13);
	ft_putchar('\n');
	ft_putnbr(-133);
	ft_putchar('\n');
	return (0);
}

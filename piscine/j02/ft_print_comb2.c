#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(void)
{
	char a = '0';
	char b = '0';
	char c = '0';
	char d = '0';

	while (a <= '9')
	{
		b = '0';
		while (b <= '9')
		{
			c = '0';
			while (c <= '9')
			{
				d = 0;
				while (d <= '9')
				{
					ft_putchar(a);
					ft_putchar(b);
					ft_putchar(' ');
					ft_putchar(c);
					ft_putchar(d);
					ft_putchar(',');
					ft_putchar(' ');
					d += 1;
				}
				c += 1;
			}
			b += 1;
		}
		a += 1;
	}
}

int		main()
{
	print_comb();
	return (0);
}

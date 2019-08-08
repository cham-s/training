#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_comb(void)
{
	int start = 0;
	int end = 9;
	int condition = 7 + 8 + 9;


	while (start <= end - 2)
	{
		int start_2 = start + 1;
		while (start_2 <= end - 1)
		{
			int start_3 = start + 2;
			while (start_3 <= end)
			{
				int check = start + start_2 + start_3;
				ft_putchar('0' + start);
				ft_putchar('0' + start_2);
				ft_putchar('0' + start_3);
				if (condition != check)
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				start_3 += 1;
			}
			start_2 += 1;
		}
		start += 1;
	}
}

int		main()
{
	print_comb();
	return (0);
}

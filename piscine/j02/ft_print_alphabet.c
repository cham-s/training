#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_alphabet(void)
{
	char current_char = 'a';
	while (current_char <= 'z')
	{
		ft_putchar(current_char);
		current_char += 1;
	}
}

int		main()
{
	print_alphabet();
	return (0);
}

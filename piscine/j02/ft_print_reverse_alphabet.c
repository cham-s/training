#include <unistd.h>
#include <stdio.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_reverse_alphabet(void)
{
	char current_char = 'z';
	while (current_char >= 'a')
	{
		ft_putchar(current_char);
		current_char -= 1;
	}
}

int		main()
{
	print_reverse_alphabet();
	return (0);
}

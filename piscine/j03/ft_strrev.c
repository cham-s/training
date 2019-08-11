#include <stdio.h>

int	ft_strlen(char *str)
{
	int len = 0;
	while (*str != '\0')
	{
		str += 1;
		len += 1;
	}
	return (len);
}

char	*ft_strrev(char *str)
{
	char	*end = str + ft_strlen(str) - 1;
	char	*start = str;
	char	tmp;

	while (start < end)
	{
		printf("swapping %c with %c\n", *start, *end);
		tmp = *start;
		*start = *end;
		*end = tmp;
		start += 1;
		end -= 1;
	}
	return str;
}

int main()
{
	char str1[6]= "Hello";
	char str[6]= "Hello";
	printf("def: %s\nrev: %s\n", str1, ft_strrev(str));
	return (0);
}

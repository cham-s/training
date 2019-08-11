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

int main()
{
	printf("length of %s is %d\n", "tree", ft_strlen("tree"));
	return (0);
}

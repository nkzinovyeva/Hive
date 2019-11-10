#include <unistd.h>
#include "my_stdlib.h"

int		ft_strlen(char *str)
{
	int i;
	i = 0;
	while (str[i] != '\0')
		i = i + 1;
	return (i);
}

void	put_string_fd(int fd, char *str)
{
	write(fd, str, ft_strlen(str));
}

void	put_char_fd(int fd, char c)
{
	char x[1];
	x[0] = c;
	write(fd, x, 1);
}

// TODO FIXME
int		ft_atoi(char *str)
{
	int i;
	int coef;
	int result;

	i = 0;
	coef = 1;
	result = 0;
	if (str[i] == '-')
	{
		coef = -1;
		str = str + 1;
	}
	else if (str[i] == '+')
		str = str + 1;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			int x = str[i] - '0';
			result = (result * ((i > 0) ? 10 : 1)) + x;
		}
		else
			return (0);
		i = i + 1;
	}
	return (result * coef);
}

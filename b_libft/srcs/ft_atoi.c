#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(const char *str)
{
	int i;
	int sym;
	int result;

	i = 0;
	sym = 1;
	result = 0;
	//while ((str[i] == ' ') || (str[i] == '\t') || (str[i] == '\n') || (str[i] == '\v') || (str[i] == '\f') || (str[i] == '\r'))
	while ((str[i] == ' ') || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sym = -1;
		i++;
	}
	while ((str[i] >= '0') && (str[i] <= '9'))
{
		result = result * 10 + str[i] - '0';
		i++;
	}
	return (result * sym);
}

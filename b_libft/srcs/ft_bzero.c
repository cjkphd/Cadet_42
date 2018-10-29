#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	char *temp;
	size_t i;

	if (n > 0)
	{
		temp = (char *)s;
		i = 0;
		while (i < n)
		{
			temp[i] = 0;
			i++;
		}
	}
}

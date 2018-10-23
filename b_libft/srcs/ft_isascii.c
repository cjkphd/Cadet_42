#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 000 && c <= 0177)
		return (1);
	else
		return (0);
}

/*
** Why did I used octal set?
** To prove a point:
** The sets in ASCII are all same,
** The only difference is by it's base #.
** For example: 0 = 000, etc.
*/

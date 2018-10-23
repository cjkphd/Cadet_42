#include "libft.h"

int	ft_isalnum(int c)
{
	if (c >= 060 && c <= 172)
		return (1);
	else
		return (0);
}

/*
**int	main()
**{
**	printf("%d\n", ft_isalnum('0'));
**	printf("%d\n", ft_isalnum(0));
**	return 0;
*/

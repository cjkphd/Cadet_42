#include "libft.h"

int	ft_isprint(int c)
{
	if (c == ' ' || (c >= 33  && c <= 126))
		return (1);
	else
		return (0);
}

/*int	main()
**{
**	printf("%d\n", ft_isprint('3'));
**	printf("%d\n", ft_isprint('a'));
**	printf("%d\n", ft_isprint(' '));
**	printf("%d\n", ft_isprint('\t'));
**	return 0;
**}
*/

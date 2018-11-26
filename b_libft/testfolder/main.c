#include "libft.h"

int	main()
{
//	char test1[50] = "I am a monster that poops";
//	char test2[50] = "There is a woman I like";

	printf("%s\n", strnstr(NULL, "fake", 3));
	printf("%s\n", ft_strnstr(NULL, "fake", 3));
	printf("%s\n", strnstr("fake", NULL, 3));
	printf("%s\n", ft_strnstr("fake", NULL, 3));
	return 0;
}

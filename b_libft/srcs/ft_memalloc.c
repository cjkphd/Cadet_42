#include "libft.h"

void  *ft_memalloc(size_t size)
{
char  *a;

a = malloc(size);
if (!a)
return (NULL);
ft_bzero(a, size);
return (a);
}

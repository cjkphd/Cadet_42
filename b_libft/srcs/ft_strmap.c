#include "libft.h"

char  *ft_strmap(char const *s, char (*f)(char))
{
  unsigned int  i;
  char      *fresh;

  fresh = ft_strnew(ft_strlen(s));
  if (fresh == NULL)
    return (NULL);
  i = 0;
  while (s[i])
  {
    fresh[i] = f(s[i]);
    i++;
  }
  return (fresh);
}


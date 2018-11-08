#include "libft.h"

void    ft_striteri(char *s, void (*f)(unsigned int, char *))
{
  unsigned int  j;

  j = 0;
  if (s && f)
  {
    while (j < ft_strlen(s))
    {
      (*f)(j, &s[j]);
      j++;
    }
  }
}

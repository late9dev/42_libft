## Prototype

```c
void ft_bzero(void *s, size_t n);
```

## Description

The bzero() function writes n zeroed bytes to the string s.  If n is zero, bzero() does nothing.

## Return value

N/A

## Code

```c
#include "libft.h"

void    ft_bzero(void *s, size_t n)
{
    char    *tmp_src;
    size_t  i;

    tmp_src = (char *) s;
    i = 0;
    while (n > 0)
    {
        tmp_src[i] = 0;
        i++;
        n--;
    }
}
```

> francinette : OK !
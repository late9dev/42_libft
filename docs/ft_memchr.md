## Prototype

```c
void *ft_memchr(const void *s, int c, size_t n);
```

## Description

The memchr() function locates the first occurrence of c (converted to an unsigned char) in string s.

## Return value

The memchr() function returns a pointer to the byte located, or NULL if no such byte exists within n
     bytes.

## Code

```c
#include "libft.h"

void    *ft_memchr(const void *s, int c, size_t n)
{
    unsigned char   *str;
    size_t          i;

    str = (unsigned char *) s;
    c = (unsigned char) c;
    i = 0;
    while (i < n)
    {
        if (str[i] == c)
        {
            return ((void *) &str[i]);
        }
        i++;
    }
    return (NULL);
}
```

> francinette : OK !
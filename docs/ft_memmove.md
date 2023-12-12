## Prototype

```c
void *ft_memmove(void *dst, const void *src, size_t len);
```

## Description

The memmove() function copies len bytes from string src to string dst.  The two strings may overlap; the
     copy is always done in a non-destructive manner.

## Return value

The memmove() function returns the original value of dst.

## Code

```c
#include "libft.h"

void    *ft_memmove(void *dst, const void *src, size_t len)
{
    char    *tmp_src;
    char    *tmp_dst;
    size_t  i;

    if (!dst && !src)
        return (NULL);
    tmp_src = (char *) src;
    tmp_dst = (char *) dst;
    i = 0;
    if  (tmp_dst > tmp_src)
    {
        while (len-- > 0)
        {
            tmp_dst[len] = tmp_src[len];
        }
    }
    else
    {
        while (i < len)
        {
            tmp_dst[i] = tmp_src[i];
            i++;
        }
    }
    return (dst);
}
```

> francinette : OK !
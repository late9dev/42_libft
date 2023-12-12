## Prototype

```c
void *ft_memcpy(void *dst, const void *src, size_t n)
```

## Description

The memcpy() function copies n bytes from memory area src to memory area dst.  If dst and src overlap,
     behavior is undefined.  Applications in which dst and src might overlap should use memmove(3) instead.

## Return value

The memcpy() function returns the original value of dst.

## Code

```c
#include "libft.h"

void    *ft_memcpy(void *dst, const void *src, size_t n)
{
    unsigned char   *tmp_dst;
    unsigned char   *tmp_src;

    tmp_dst = (unsigned char *) dst;
    tmp_src = (unsigned char *) src;
    if (dst == 0 && src == 0)
        return (dst);
    while (n > 0)
    {
        *tmp_dst = *tmp_src;
        tmp_dst++;
        tmp_src++;
        n--;
    }
    return (dst);
}
```

> francinette : OK !
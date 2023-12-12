## Prototype

```c
void *memset(void *b, int c, size_t len);
```

## Description

The memset() function writes len bytes of value c (converted to an unsigned char) to the string b.

## Return value

The memset() function returns its first argument.

## Code

```c
#include "libft.h"

void    *ft_memset(void *b, int c, size_t len)
{
    unsigned char   *tmp_ptr;

    tmp_ptr = (unsigned char *) b;
    while (len > 0)
    {
        *tmp_ptr = (unsigned char) c;
        tmp_ptr++;
        len--;
    }
    return (b);
}
```

> francinette : OK !
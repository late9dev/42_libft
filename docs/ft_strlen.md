## Prototype

```c
size_t ft_strlen(const char *s)
```

## Description

The strlen() function computes the length of the string s.  The strnlen() function attempts to compute the
     length of s, but never scans beyond the first maxlen bytes of s.

## Return value

The strlen() function returns the number of characters that precede the terminating NUL character.  The
     strnlen() function returns either the same result as strlen() or maxlen, whichever is smaller.

## Code

```c
#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t  i;

    i = 0;
    while (s[i])
        i++;
    return (i);
}
```

> francinette : OK !
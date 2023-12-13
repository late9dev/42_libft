## Prototype

```c
char *ft_strdup(const char *s1);
```

## Description

The strdup() function allocates sufficient memory for a copy of the string s1, does the copy, and returns
     a pointer to it.  The pointer may subsequently be used as an argument to the function free(3).

     If insufficient memory is available, NULL is returned and errno is set to ENOMEM.

     The strndup() function copies at most n characters from the string s1 always NUL terminating the copied
     string.

## Return value

N/A

## Code

```c
#include "libft.h"

char    *ft_strdup(const char *s1)
{
    char    *dst;
    size_t  i;

    dst = (char *) malloc(ft_strlen(s1) + 1);
    if (!dst)
        return (NULL);
    i = 0;
    while (s1[i])
    {
        dst[i] = s1[i];
        i++;
    }
    dst[i] = 0;
    return (dst);
}
```

> francinette : OK !
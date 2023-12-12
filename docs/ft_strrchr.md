## Prototype

```c
char *ft_strrchr(const char *s, int c);
```

## Description

The strchr() function locates the first occurrence of c (converted to a char) in the string pointed to by
     s.  The terminating null character is considered to be part of the string; therefore if c is ‘\0’, the
     functions locate the terminating ‘\0’.

     The strrchr() function is identical to strchr(), except it locates the last occurrence of c.

## Return value

The functions strchr() and strrchr() return a pointer to the located character, or NULL if the character
     does not appear in the string.

## Code

```c
#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    size_t  i;
    char    *res;

    i = 0;
    res = NULL;
    c = (char) c;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            res = (char *) &s[i];
        i++;
    }
    if (s[i] == c)
        res = (char *) &s[i];
    return (res);
}
```

> francinette : OK !
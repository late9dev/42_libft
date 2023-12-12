## Prototype

```c
char *ft_strchr(const char *s, int c);
```

## Description

The strchr() function locates the first occurrence of c (converted to a
     char) in the string pointed to by s.  The terminating null character is
     considered to be part of the string; therefore if c is ‘\0’, the
     functions locate the terminating ‘\0’.

     The strrchr() function is identical to strchr(), except it locates the
     last occurrence of c.

## Return value

The functions strchr() and strrchr() return a pointer to the located
     character, or NULL if the character does not appear in the string.

## Code

```c
#include "libft.h"

char    *ft_strchr(const char *s, int c)
{
    size_t  i;

    i = 0;
    c = (char) c;
    while (s[i] != '\0')
    {
        if (s[i] == c)
            return ((char *)&s[i]);
        i++;
    }
    if (!c && s[i] == '\0')
        return ((char *)&s[i]);
    return (NULL);
}
```

> francinette : OK !
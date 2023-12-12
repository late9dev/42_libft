## Prototype

```c
char    *ft_strnstr(const char *haystack, const char *needle, size_t len);
```

## Description

The strstr() function locates the first occurrence of the null-terminated string needle in the null-
     terminated string haystack.

     The strcasestr() function is similar to strstr(), but ignores the case of both strings.

     The strnstr() function locates the first occurrence of the null-terminated string needle in the string
     haystack, where not more than len characters are searched.  Characters that appear after a ‘\0’ character
     are not searched.  Since the strnstr() function is a FreeBSD specific API, it should only be used when
     portability is not a concern.

     While the strcasestr() function uses the current locale, the strcasestr_l() function may be passed a
     locale directly. See xlocale(3) for more information.

## Return 

If needle is an empty string, haystack is returned; if needle occurs nowhere in haystack, NULL is
     returned; otherwise a pointer to the first character of the first occurrence of needle is returned.

## Code

```c
#include "libft.h"

char    *ft_strnstr(const char *haystack, const char *needle, size_t len)
{
    size_t  i;
    size_t  j;

    i = 0;
    j = 0;
    if (needle[0] == '\0')
        return ((char *) haystack);
    while (haystack[i] && (i < len))
    {
        while (haystack[i + j] == needle[j] && haystack[i + j] && (i + j) < len)
        {
            j++;
            if (needle[j] == '\0')
                return ((char *) haystack + i);
        }
        i++;
        j = 0;
    }
    return (NULL);
}
```

> francinette : OK !
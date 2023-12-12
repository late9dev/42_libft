## Prototype

```c
int ft_tolower(int c);
```

## Description

The tolower() function converts an upper-case letter to the corresponding
     lower-case letter.  The argument must be representable as an unsigned
     char or the value of EOF.

     Although the tolower() function uses the current locale, the tolower_l()
     function may be passed a locale directly. See xlocale(3) for more
     information.

## Return value

If the argument is an upper-case letter, the tolower() function returns
     the corresponding lower-case letter if there is one; otherwise, the
     argument is returned unchanged.

## Code

```c
#include "libft.h"

int ft_tolower(int c)
{   
    if ((c >= 'A') && (c <= 'Z'))
        c += 32;
    return (c);
}

```

> francinette OK !
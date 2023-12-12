## Prototype

```c
int ft_toupper(int c);
```

## Description

The toupper() function converts a lower-case letter to the corresponding
     upper-case letter.  The argument must be representable as an unsigned
     char or the value of EOF.

     Although the toupper() function uses the current locale, the toupper_l()
     function may be passed a locale directly. See xlocale(3) for more
     information.

## Return value

If the argument is a lower-case letter, the toupper() function returns
     the corresponding upper-case letter if there is one; otherwise, the
     argument is returned unchanged.

## Code

```c
#include "libft.h"

int ft_toupper(int c)
{
    if ((c >= 'a') && (c <= 'z'))
    {
        c -= 32;
    }
    return (c);
}
```

> francinette OK !
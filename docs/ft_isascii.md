## Prototype

```c
int ft_isascii(int c);
```

## Description

The isascii() function tests for an ASCII character, which is any
     character between 0 and octal 0177 inclusive.

## Return value

The isascii() function returns zero if the character tests false and
     returns non-zero if the character tests true.

## Code

```c
#include "libft.h"

int ft_isascii(int c)
{
    return ((c >= 0) && (c <= 127));
}
```

> francinette OK !
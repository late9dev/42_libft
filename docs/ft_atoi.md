## Prototype

```c
int atoi(const char *str);
```

## Description

The atoi() function converts the initial portion of the string pointed to by str to int representation.

     It is equivalent to:

           (int)strtol(str, (char **)NULL, 10);

     While the atoi() function uses the current locale, the atoi_l() function may be passed a locale directly.
     See xlocale(3) for more information.

## Return value

N/A

## Code

```c
#include "libft.h"

int ft_isspace(int c);

int ft_atoi(const char *str)
{
    int res;
    int sign;
    int i;

    res = 0;
    sign = 1;
    i = 0;
    while (ft_isspace(str[i]))
        i++;
    if (str[i] == '+' && str[i + 1] != '-')
        i++;
    if (str[i] == '-')
    {
        sign = -1;
        i++;
    }
    while (str[i] && ft_isdigit(str[i]))
    {
        res = res * 10;
        res = res + str[i] - 48;
        i++;
    }
    res = res * sign;
    return (res);
}

int ft_isspace(int c)
{
    return ((c == '\t') || (c == '\n') || (c == '\v') || (c == '\r') || (c == '\f') || (c == ' '));
}
```

> francinette : OK ! 
> Norminette : NO ! -> isspace line too long . (todo)
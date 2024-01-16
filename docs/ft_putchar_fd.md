## Prototype

```c
void ft_putchar_fd(char c, int fd);
```

## Description

Écrit le caractère ’c’ sur le descripteur de
fichier donné.

## Return value

Aucune

## Code

```c
#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
```

> francinette : OK !
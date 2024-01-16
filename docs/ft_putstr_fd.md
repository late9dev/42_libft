## Prototype

```c
void ft_putstr_fd(char *s, int fd);
```

## Description

Écrit la chaîne de caractères ’s’ sur le
descripteur de fichier donné.

## Return value

Aucune

## Code

```c
#include "libft.h"

void	ft_putstr_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
}
```

> francinette : OK !
## Prototype

```c
void ft_putendl_fd(char *s, int fd);
```

## Description

Écrit La chaîne de caractères ’s’ sur le
descripteur de fichier donné suivie d’un retour à
la ligne.

## Return value

Aucune

## Code

```c
#include "libft.h"

void	ft_putendl_fd(char *str, int fd)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(fd, &str[i], 1);
		i++;
	}
	write(fd, "\n", 1);
}
```

> francinette : OK !
## Prototype

```c
void ft_putnbr_fd(int n, int fd);
```

## Description

Écrit l’entier ’n’ sur le descripteur de fichier
donné.

## Return value

Aucune

## Code

```c
#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	int	digit;

	if (n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		write(fd, "-", 1);
		n = -n;
		ft_putnbr_fd(n, fd);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_fd(n / 10, fd);
			ft_putnbr_fd(n % 10, fd);
		}
		else
		{
			digit = n + 48;
			write(fd, &digit, 1);
		}
	}
}
```

> francinette : OK !
## Prototype

```c
char *ft_strmapi(char const *s, char (*f)(unsigned int, char));
```

## Description

Applique la fonction ’f’ à chaque caractère de la
chaîne de caractères passée en argument pour créer
une nouvelle chaîne de caractères (avec malloc(3))
résultant des applications successives de ’f’.

## Return value

La chaîne de caractères résultant des applications
successives de ’f’.
Retourne NULL si l’allocation échoue.

## Code

```c
#include "libft.h"

char	*ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*res;

	res = malloc((ft_strlen(s) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s))
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}
```

> francinette : OK !
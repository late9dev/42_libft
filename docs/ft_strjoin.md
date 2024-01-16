## Prototype

```c
char *ft_strjoin(char const *s1, char const *s2);
```

## Description

Alloue (avec malloc(3)) et retourne une nouvelle
chaîne, résultat de la concaténation de s1 et s2.

## Return value

La nouvelle chaîne de caractères.
NULL si l’allocation échoue.

## Code

```c
#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	int i;
	int j;
	char *res;

	if (!s1 || !s2)
		return (NULL);
	i = 0;
	j = 0;
	res = (char *)malloc((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (s1[i])
		res[j++] = s1[i++];
	i = 0;
	while (s2[i])
		res[j++] = s2[i++];
	res[j] = '\0';
	return (res);
}
```

> francinette : OK !
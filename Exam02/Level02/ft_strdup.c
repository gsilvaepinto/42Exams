#include <stdio.h>
#include <stdlib.h>

char *ft_strdup(char *src)
{
    int i = 0;
    int len;
    char *new;

    while (src[len])
        len++;
    new = malloc(sizeof(char) * len + 1);
    if (!new)
    	return (NULL);
	while (src[i])
	{
		new[i] = src[i];
		i++;
	}
    new[i] = '\0';
	return (new);
}

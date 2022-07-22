#include "main.h"

#include <stdio.h>

/**
 * _strpbrk - main description
 * @s: array of char
 * @accept: array
*Return: return
 */
char *_strpbrk(char *s, char *accept)

{

int j;



for (; *s != '\0' ; s++)

{

for (j = 0; accept[j] != '\0' ; j++)

{

if (*s == accept[j])

return (s);

}

}

return (NULL);

}

#include <stdio.h>

/**
* _strchr - main descritpion
* @s: array of char
* @c: char
* Return: return  char string
 */
char *_strchr(char *s, char c)
{


for ( ; *s != '\0' ; s++)
{
if (*s == c)
{
return (s);
}
}

if (*s == c)
return (s);

return (NULL);
}

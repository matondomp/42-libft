#include "libft.h"

char    *ft_strmapi(const char *s, char (*f)(unsigned int, char))
{
    int     len;
    int     i;
    char    *str;

    i = 0;
    len = ft_strlen(s);
    str = (char *)malloc((len + 1) * sizeof(char));
    if(!str)
        return (NULL);
    while(i < len)
    {
        str[i] = (*f)(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}
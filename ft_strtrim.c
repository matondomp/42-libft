#include "libft.h"

static  int to_trim(const char *set, char c)
{
    int i;

    i = 0;
    while(set[i])
    {
        if(set[i] == c)
            return (1);
        i++;
    }
    return (0);
}

char    *strimed_str(const char *s1, size_t start,size_t end)
{
    size_t i;
    size_t  len;
    char    *str;

    i = 0;
    len = end - (start - 1);
    str = ft_calloc(len, sizeof(char));
    if(!str)
        return (NULL);
    while(i < len)
    {
        str[i] = s1[start + i];
        i++;
    }
    return (str);
}

char    *ft_strtrim(const char *s1, const char *set)
{
    size_t  i;
    size_t  j;

    j = ft_strlen(s1) - 1;
    if(ft_strlen(s1) == 0)
            return (ft_strdup(""));
    if(s1 == NULL)
        return (ft_strdup(""));
    i = 0;
    while(to_trim(set, s1[i]))
        i++;
    while(to_trim(set, s1[j]))
        j--;

    return (strimed_str(s1, i, j));

}
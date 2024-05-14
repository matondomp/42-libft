#include "libft.h"

char *ft_strjoin(const char *s1, const char *s2)
{
    char *res;
    int i;
    int j;
    size_t len1;
    size_t len2;
    
    i = 0;
    j = 0;
    if(s1 == NULL || s2 == NULL)
        return (NULL);
    len1 = ft_strlen(s1);
    len2 = ft_strlen(s2);

    res = (char *) malloc((len1 + len2 + 1) * sizeof(char));
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
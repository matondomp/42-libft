#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
        int     i;
        int     s_len = ft_strlen(s) + 1;
        char    cc;
        char *res;

        i = 0;
        cc = (char) c;
        res = NULL;
        while(i < s_len)
        {
                if(cc == s[i])
		        res = ((char *)&s[i]);
                i++;
        }
	if(s[i] == cc)
		res = ((char *)&s[i]);
        
        return res;
}

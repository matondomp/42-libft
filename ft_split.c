#include "libft.h"

int	word_count(const char *s, char c)
{
	int count = 0;
	int in_word = 0;
	while (*s)
	{
		if (*s == c)
		{
			in_word = 0;
		}
		else if (!in_word)
		{
			count++;
			in_word = 1;
		}
		s++;
	}
	return count;
}

void ft_free(char **s, size_t count)
{
	while (count--)
	{
		free(s[count]);
	}
	free(s);
}

char	*fill_word(const char *s, int start, int end)
{
	char	*substr = (char *)malloc(end - start + 2);
	if (!substr)
		return (NULL);

	int i = 0;
	while (start <= end)
	{
		substr[i++] = s[start++];
	}
	substr[i] = '\0';
	return substr;
}

char	**ft_split(const char *s, char c)
{
	if (*s == '\0')
    {
        char **empty_str = (char **)malloc(sizeof(char *));
        if (!empty_str)
            return (NULL);
        empty_str[0] = NULL;
        return (empty_str);
    }

	int num_words = word_count(s, c);
	char **str = (char **)ft_calloc(num_words + 1, sizeof(char *));
	if (!str)
		return (NULL);

	int start = 0;
	int end = 0;
	int i = 0;
	while (s[end])
	{
		if (s[end] == c)
		{
			str[i] = fill_word(s, start, end - 1);
			if (!str[i])
			{
				ft_free(str, i);
				return (NULL);
			}
			start = end + 1;
			i++;
		}
		end++;
	}
	str[i] = fill_word(s, start, end - 1);
	if (!str[i])
	{
		ft_free(str, i);
		return (NULL);
	}
	str[i + 1] = NULL;
	return str;
}

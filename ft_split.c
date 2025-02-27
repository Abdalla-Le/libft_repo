#include "libft.h"

#include <string.h>
#include <stdlib.h>

static int	count_w(char const *s, char c)
{
    int	i;
    int	words;

    i = 0;
    words = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;

		if (s[i] != '\0')
		{
        	words++;
				printf("%d", words);
			while (s[i] != c && s[i])
				i++;
		}
    }
    return (words);
}

static int count_l(char const *s, char c)
{
    int letters;

    letters = 0;
    while (s[letters] && s[letters] != c)
    {
        letters++;
    }
    return (letters);
}

void    alloc_vet(char const *s, char **new_s ,char c)
{
    int    i;
    int    letters;
    int    word;

    word = 0;
    i = 0;
    while (s[i])
    {
        while (s[i] == c)
            i++;

        if (s[i] != '\0')
        {
			letters = count_l(s + i, c);
			new_s[word] = (char *) malloc (sizeof(char) * letters + 1);
            if(!new_s[word])
				return;


        ft_strlcpy(new_s[word], (char *)s + i, letters);
        word++;
		i += letters;
		}
	}
}

char    **alloc_mat(char const *s, char c)
{
    int    words;
    char    **new_s;

    words = count_w(s, c);
    new_s = (char **) malloc(sizeof (char *) * (words + 1));
    if (new_s ==  NULL)
        return (NULL);
    new_s[words] = NULL;

    return (new_s);
}

char    **ft_split(char const *s, char c)
{
    char    **new_s;

	if(!s)
		return (NULL);

    new_s = alloc_mat(s, c);
	if(!new_s)
		return (NULL);

    alloc_vet(s, new_s, c);
    return (new_s);
}

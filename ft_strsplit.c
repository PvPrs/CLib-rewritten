/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strsplit.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: dvan-boc <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2019/01/22 20:34:34 by dvan-boc      #+#    #+#                 */
/*   Updated: 2019/01/22 20:34:38 by dvan-boc      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

static int		ft_get_words(const char *s, char c)
{
	int i;
	int words;

	i = 0;
	words = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			while (s[i] != c && s[i] != '\0')
				i++;
			words++;
		}
	}
	return (words);
}

static char		**ft_get_length(char **str, char const *s, char c)
{
	int		index;
	int		word_index;
	int		start;
	size_t	len;

	word_index = 0;
	index = 0;
	while (word_index < ft_get_words(s, c))
	{
		if (s[index] != c)
		{
			start = index;
			len = 0;
			while (s[index] != c && s[index])
			{
				len++;
				index++;
			}
			str[word_index] = ft_strsub(s, start, len);
			word_index++;
		}
		index++;
	}
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;

	if (!s || !c)
		return (NULL);
	str = (char **)malloc(ft_get_words(s, c) * sizeof(char*) + 1);
	if (!str)
		return (NULL);
	ft_get_length(str, s, c);
	str[ft_get_words(s, c)] = NULL;
	return (str);
}

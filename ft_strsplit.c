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

#include "libft.h"

static int		ft_get_words(const char *s, char c)
{
	int i;
	int flag;
	int words;

	i = 0;
	flag = 0;
	words = 1;
	while (s[i])
	{
		if (flag == 0 && s[i] != c)
			flag = 1;
		if (flag == 1 && s[i] == c)
		{
			flag = 0;
			words++;
		}
		i++;
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
			while (s[index] != c)
			{
				len++;
				index++;
			}
			str[word_index++] = ft_strsub(s, start, len);
		}
		index++;
	}
	str[word_index] = NULL;
	return (str);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**str;

	str = (char **)malloc(ft_get_words(s, c) * sizeof(char*) + 1);
	ft_get_length(str, s, c);
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mashley <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/17 12:11:01 by mashley           #+#    #+#             */
/*   Updated: 2019/09/20 18:36:51 by mashley          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/libft.h"

static size_t	ft_count_words(char const *s, char c)
{
	size_t words;
	size_t i;

	words = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i])
		{
			words++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (words);
}

static char		*ft_get_word(char *word, char c)
{
	char	*start;
	size_t	i;

	start = word;
	i = 0;
	while (word[i] && word[i] != c)
		i++;
	word[i] = '\0';
	return (ft_strdup(start));
}

static void		ft_free_words(char **words, size_t i)
{
	while (i--)
		ft_strdel(&(words[i]));
	free(*words);
}

static char		**ft_get_words(char *s, char c, size_t words_count)
{
	char	**words;
	char	*word;
	size_t	i;

	i = 0;
	if ((words = (char**)ft_memalloc(sizeof(char*) * (words_count + 1))))
	{
		while (i < words_count)
		{
			while (*s == c)
				s++;
			if (*s)
			{
				if (!(word = ft_get_word(s, c)))
				{
					ft_free_words(words, i);
					return (NULL);
				}
				words[i++] = word;
				s += (ft_strplen(word) + 1);
			}
		}
		words[i] = NULL;
	}
	return (words);
}

char			**ft_strsplit(char const *s, char c)
{
	char	**words;
	char	*line;

	if (!s)
		return (NULL);
	line = ft_strdup((char*)s);
	if (!line)
		return (NULL);
	words = ft_get_words(line, c, ft_count_words(line, c));
	free(line);
	return (words);
}

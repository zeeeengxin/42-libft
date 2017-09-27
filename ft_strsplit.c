/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zengxin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 22:05:26 by zengxin           #+#    #+#             */
/*   Updated: 2017/09/25 22:05:32 by zengxin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(char *s, char c)
{
	size_t	word_n;
	size_t	j;

	word_n = 0;
	j = 0;
	if(s[j] != c)
	{
		word_n++;
	}
	j++;
	while (s[j])
	{
		if (s[j] && s[j] != c && s[j - 1] == c)
		{
			word_n++;
		}
		j++;
	}
	return (word_n);
}

static int	word_len(char *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return (i);
}

static char	*word_create(char **str, char c)
{
	char	*word;
	char	*p;
	int		i;
	int		size;

	p = *str;
	size = word_len(p, c);
	word = (char *)malloc(sizeof(char) * (size + 1));
	if (word == 0)
		return (NULL);
	i = 0;
	while (i < size)
	{
		word[i] = *p;
		i++;
		p++;
	}
	word[i] = '\0';
	*str = p;
	return (word);
}

char		**ft_strsplit(char const *s, char c)
{
	char	**result;
	char	**start;
	int		word_n;

	if (s == 0)
		return (NULL);
	word_n = word_count((char *)s, c);
	if (!(result = (char **)malloc(sizeof(char *) * (word_n + 1))))
		return (NULL);
	start = result;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s != '\0')
		{
			if (!(*result = word_create((char **)&s, c)))
				return (NULL);
			result++;
		}
	}
	*result = 0;
	return (start);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zengxin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/25 21:24:58 by zengxin           #+#    #+#             */
/*   Updated: 2017/09/25 21:25:00 by zengxin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	char		*str;
	long long	i;
	long long	j;
	long long	start;

	if (s == 0)
		return (NULL);
	i = 0;
	j = ft_strlen(s) - 1;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	start = i;
	while (s[i] && (s[j] == ' ' || s[j] == '\n' || s[j] == '\t'))
		j--;
	if (!(str = ft_strnew(j - i + 1)))
		return (NULL);
	while (i <= j)
	{
		str[i - start] = s[i];
		i++;
	}
	str[i - start] = '\0';
	return (str);
}

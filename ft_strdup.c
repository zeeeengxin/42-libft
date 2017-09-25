/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzeng <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/21 22:16:36 by xzeng             #+#    #+#             */
/*   Updated: 2017/09/21 22:16:41 by xzeng            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*cp;
	size_t	i;

	len = ft_strlen(s1);
	cp = (char *)malloc(sizeof(char) * (len + 1));
	if (cp == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i <= len)
	{
		cp[i] = s1[i];
		i++;
	}
	return (cp);
}

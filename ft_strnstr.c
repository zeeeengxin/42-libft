/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zengxin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 22:41:59 by zengxin           #+#    #+#             */
/*   Updated: 2017/09/24 22:42:04 by zengxin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (needle[0] == '\0')
		return ((char *)haystack);
	h = 0;
	n = 0;
	while (haystack[h] && h < len)
	{
		while (needle[n] && haystack[n + h] &&
			haystack[h + n] == needle[n] && (h + n) < len)
		{
			if (n == (ft_strlen(needle) - 1))
				return ((char *)&haystack[h]);
			n++;
		}
		n = 0;
		h++;
	}
	return (NULL);
}

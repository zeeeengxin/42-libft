/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zengxin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/24 16:01:29 by zengxin           #+#    #+#             */
/*   Updated: 2017/09/24 16:01:34 by zengxin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	 size_t	h;
	 size_t	n;

	 if (needle[0] == '\0')
	 	return ((char *)haystack);
	 h = 0;
	 n = 0;
	 while (haystack[h])
	 {
	 	while (needle[n] && haystack[h + n] && (haystack[h + n] == needle[n]))
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

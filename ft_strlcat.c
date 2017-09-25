/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zengxin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/23 21:44:37 by zengxin           #+#    #+#             */
/*   Updated: 2017/09/23 21:44:39 by zengxin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	total_len;

	dst_len = 0;
	while (dst[dst_len] != '\0' && dst_len < size)
		dst_len++;
	total_len = dst_len;
	while (src[total_len - dst_len] != '\0' && total_len + 1 < size)
	{
		dst[total_len] = src[total_len - dst_len];
		total_len++;
	}
	if (total_len < size)
		dst[total_len] = '\0';
	return (dst_len + ft_strlen(src));
}

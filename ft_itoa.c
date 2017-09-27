/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zengxin <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/09/26 15:19:55 by zengxin           #+#    #+#             */
/*   Updated: 2017/09/26 15:20:02 by zengxin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		nb_count(int n)
{
	int		c;

	c = 0;
	if (n <= 0)
		c++;
	while (n != 0)
	{
		n = n / 10;
		c++;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		i;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = 0;
	len = nb_count(n);
	if (!(str = (char *)malloc(sizeof(char) * (len + 1))))
		return (NULL);
	if (n < 0)
	{
		n = n * (-1);
		str[0] = '-';
		i++;
	}
	str[len] = '\0';
	while (i < len--)
	{
		str[len] = (n % 10) + '0';
		n = n / 10;
	}
	return (str);
}

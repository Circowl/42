/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 18:20:25 by cpires-p          #+#    #+#             */
/*   Updated: 2016/12/19 11:01:44 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static void		negatif(int *n, int *neg)
{
	if (*n < 0)
	{
		*n = *n * (-1);
		*neg = 1;
	}
}

char			*ft_itoa(int n)
{
	int		i;
	int		len;
	int		neg;
	char	*str;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	i = n;
	len = 2;
	neg = 0;
	negatif(&n, &neg);
	while (i /= 10)
		len = len + 1;
	len = len + neg;
	if ((str = (char*)malloc(sizeof(char) * len)) == NULL)
		return (NULL);
	str[--len] = '\0';
	while (len--)
	{
		str[len] = (n % 10) + 48;
		n = n / 10;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

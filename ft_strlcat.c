/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 18:46:15 by cpires-p          #+#    #+#             */
/*   Updated: 2017/01/08 03:12:05 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t a;
	size_t b;

	if (size == 0)
		return (ft_strlen(dest));
	a = 0;
	while (dest[a] && a < size)
		a = a + 1;
	b = a;
	while (src[a - b] && a < size - 1)
	{
		dest[a] = src[a - b];
		a = a + 1;
	}
	if (b < size)
		dest[a] = '\0';
	return (b + ft_strlen(src));
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/28 14:02:25 by cpires-p          #+#    #+#             */
/*   Updated: 2016/12/20 12:37:30 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	*ptr;
	size_t			i;

	str = (unsigned char*)src;
	ptr = (unsigned char*)dest;
	i = 0;
	while (i < n)
	{
		ptr[i] = str[i];
		if (str[i] == (unsigned char)c)
			return (ptr + i + 1);
		i = i + 1;
	}
	return (NULL);
}

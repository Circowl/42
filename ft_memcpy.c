/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:20:38 by cpires-p          #+#    #+#             */
/*   Updated: 2017/01/09 22:29:51 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*str;
	unsigned char	*ptr;
	size_t			i;

	str = (unsigned char*)src;
	ptr = dest;
	i = 0;
	while (i < n)
	{
		*(ptr + i) = *(str + i);
		i = i + 1;
	}
	return (ptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 17:05:19 by cpires-p          #+#    #+#             */
/*   Updated: 2016/12/07 11:15:50 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strnstr(const char *str, const char *ch, size_t n)
{
	size_t	m;

	if (*ch == '\0')
		return ((char*)str);
	m = ft_strlen(ch);
	while (*str != '\0' && (n--) >= m)
	{
		if (*str == *ch && ft_memcmp(str, ch, m) == 0)
			return ((char*)str);
		str = str + 1;
	}
	return (NULL);
}

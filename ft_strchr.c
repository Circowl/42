/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 12:52:21 by cpires-p          #+#    #+#             */
/*   Updated: 2016/11/30 22:29:30 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*(s++) == (char)c)
			return ((char*)(s - 1));
	}
	if (c == 0)
		return ((char*)s);
	return (NULL);
}
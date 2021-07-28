/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:19:28 by cpires-p          #+#    #+#             */
/*   Updated: 2016/12/07 10:44:01 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	a;
	char	*str;

	str = malloc(sizeof(char*) * ft_strlen(s));
	if (!s)
		return (NULL);
	ft_strcpy(str, s);
	a = ft_strlen(s);
	while ((int)a >= 0)
	{
		if (str[a] == c)
			return ((char*)s + a);
		a = a - 1;
	}
	return (NULL);
}

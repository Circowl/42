/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/23 21:11:57 by cpires-p          #+#    #+#             */
/*   Updated: 2016/12/18 16:55:22 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	coucou;
	char	*str;
	size_t	i;

	i = 0;
	if (!s)
		return (NULL);
	coucou = (size_t)start;
	str = malloc(sizeof(char) * (len + 1));
	if (!str)
		return (NULL);
	while (i != len)
	{
		str[i] = s[coucou + i];
		i = i + 1;
	}
	str[i] = '\0';
	return (str);
}

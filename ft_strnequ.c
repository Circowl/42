/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 20:46:52 by cpires-p          #+#    #+#             */
/*   Updated: 2016/12/16 19:08:14 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

int		ft_strnequ(const char *s1, const char *s2, size_t n)
{
	size_t i;

	i = 0;
	if (!s1)
		return ('\0');
	while (s1[i] != '\0' && s2[i] != '\0' && i != n)
	{
		if (s1[i] != s2[i])
			return (0);
		i = i + 1;
	}
	return (1);
}

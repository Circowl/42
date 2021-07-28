/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 01:36:03 by cpires-p          #+#    #+#             */
/*   Updated: 2017/01/10 01:41:23 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrev(char *str)
{
	int		i;
	int		j;
	char	tmp;

	j = 0;
	i = ft_strlen(str) - 1;
	while (i > j)
	{
		tmp = str[j];
		str[j] = str[i];
		str[i] = str[j];
		i = i - 1;
		j = j + 1;
	}
	return (str);
}

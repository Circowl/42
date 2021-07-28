/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/06 14:50:07 by cpires-p          #+#    #+#             */
/*   Updated: 2016/12/19 13:51:52 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *nptr)
{
	int		n;
	int		i;

	while (*nptr == ' ' || *nptr == '\t' || *nptr == '\n' \
		|| *nptr == '\v' || *nptr == '\f' || *nptr == '\r')
		nptr = nptr + 1;
	i = 0;
	n = 1;
	if (*nptr == '-' || *nptr == '+')
	{
		n = (*nptr == '-' ? -1 : 1);
		nptr = nptr + 1;
	}
	while (ft_isdigit(*nptr))
	{
		i = (i * 10) + (*nptr - 48);
		nptr = nptr + 1;
	}
	return (i * n);
}

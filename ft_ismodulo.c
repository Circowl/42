/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ismodulo.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 22:46:50 by cpires-p          #+#    #+#             */
/*   Updated: 2017/01/09 22:50:42 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_ismodulo(int n, int mod)
{
	if (n < mod)
		return (0);
	if ((n % mod) == 0)
		return (1);
	return (0);
}

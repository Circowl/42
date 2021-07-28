/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_touche.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/10 01:11:12 by cpires-p          #+#    #+#             */
/*   Updated: 2017/01/10 01:25:03 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_touche(char *str)
{
	int		i;
	int		j;

	j = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == 'm' || str[i] == 'b' || str[i] == 'p')
		{
			j = 1;
		}
		i = i + 1;
	}
	if (j == 1)
		ft_putstr("ca touche !");
	else
		ft_putstr("ca touche pas !");
}

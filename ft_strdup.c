/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 15:08:07 by cpires-p          #+#    #+#             */
/*   Updated: 2016/11/30 21:28:46 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	int		n;
	char	*ch;

	n = 0;
	while (src[n] != '\0')
		n = n + 1;
	ch = malloc(sizeof(char) * (n + 1));
	if (ch == NULL)
		return (NULL);
	n = 0;
	while (src[n] != '\0')
	{
		ch[n] = src[n];
		n = n + 1;
	}
	ch[n] = '\0';
	return (ch);
}

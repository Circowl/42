/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/24 14:50:59 by cpires-p          #+#    #+#             */
/*   Updated: 2017/01/07 23:46:58 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_strtrim(const char *str)
{
	char	*s;
	int		i;
	int		j;

	i = 0;
	j = -1;
	if (!str)
		return (NULL);
	while (*str == ' ' || *str == '\t' || *str == '\n')
		str = str + 1;
	if (str[0] == '\0')
		return (ft_strnew(0));
	while (str[i] != '\0')
		i = i + 1;
	while (str[i - 1] == ' ' || str[i - 1] == '\t' || str[i - 1] == '\n')
		i = i - 1;
	s = malloc(sizeof(char) * (i + 1));
	if (!s)
		return (NULL);
	while (++j != i)
		s[j] = str[j];
	s[j] = '\0';
	return (s);
}

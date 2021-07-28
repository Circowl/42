/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/12 20:58:05 by cpires-p          #+#    #+#             */
/*   Updated: 2016/12/16 19:10:49 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

static int		ft_count(const char *str, char c)
{
	int a;
	int i;

	i = 0;
	a = 0;
	if (!str)
		return (0);
	while (str[i])
	{
		if (str[i] == c && str[i + 1] != c)
			a = a + 1;
		i = i + 1;
	}
	if (str[0] != '\0')
		a = a + 1;
	return (a);
}

static char		*ft_word(char const *str, char c, int *i)
{
	char	*s;
	int		k;

	if (!(s = (char *)malloc(sizeof(s) * (ft_strlen(str)))))
		return (NULL);
	k = 0;
	while (str[*i] != c && str[*i])
	{
		s[k] = str[*i];
		k = k + 1;
		*i = *i + 1;
	}
	s[k] = '\0';
	while (str[*i] == c && str[*i])
		*i = *i + 1;
	return (s);
}

char			**ft_strsplit(char const *str, char c)
{
	char	**s;
	int		i;
	int		j;
	int		wrd;

	i = 0;
	j = 0;
	if (!str)
		return (NULL);
	wrd = ft_count(str, c);
	if (!(s = (char **)malloc(sizeof(s) * (wrd + 2))))
		return (NULL);
	while (str[i] == c && str[i])
		i = i + 1;
	while (j < wrd && str[i])
	{
		s[j] = ft_word(str, c, &i);
		j = j + 1;
	}
	s[j] = NULL;
	return (s);
}

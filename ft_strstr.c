/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/05 13:25:18 by cpires-p          #+#    #+#             */
/*   Updated: 2016/12/07 09:45:53 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strstr(const char *str, const char *ch)
{
	int		a;
	int		b;
	int		c;

	a = 0;
	c = 0;
	if (ch[0] == '\0')
		return (char*)(str);
	while (str[a] != '\0')
	{
		b = a;
		c = 0;
		while (str[b] == ch[c])
		{
			b = b + 1;
			c = c + 1;
			if (ch[c] == '\0')
				return (char*)(&str[a]);
		}
		a = a + 1;
	}
	return (NULL);
}

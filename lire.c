/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lire.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/08 15:37:51 by cpires-p          #+#    #+#             */
/*   Updated: 2017/07/08 15:37:58 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>
#include <fcntl.h>

int		ft_verif(char *str)
{
	int		i;
	int		j;
	int		test;
	char	**tabc;

	i = 0;
	j = 0;
	test = 0;
	tabc = ft_strsplit(str, '\n');
	while (tabc[i][test] != '\0')
		test = test + 1;
	while (tabc[i] != '\0')
	{
		while (tabc[i][j] != '\0')
		{
			j = j + 1;
		}
		if (j != test)
			return (0);
		j = 0;
		i = i + 1;
	}
	if (test != (i - 1))
		return (0);
	return (1);
}



int		main(int argc, char **argv)
{
	int		fd;
	char	str[4096 + 1];
	int		len;
	char	***tab;
	int		c;


	fd = open(argv[1], O_RDONLY);
	len = read(fd, str, 4096);
		return (0);
	str[len] = '\0';
	if (ft_verif(str) == 0)
	{
		ft_putstr("error\n");
		return (0);
	}
	else
	{
		ft_putstr("okok\n");
		return (0);
	}
}


/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/18 22:31:17 by cpires-p          #+#    #+#             */
/*   Updated: 2016/11/30 22:12:07 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>

void	*ft_memalloc(size_t size)
{
	void *ret;

	if (!(ret = malloc(size)))
		return (NULL);
	while (size--)
		((char*)ret)[size] = 0;
	return (ret);
}

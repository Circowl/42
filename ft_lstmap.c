/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cpires-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/07 21:31:17 by cpires-p          #+#    #+#             */
/*   Updated: 2017/01/07 21:31:20 by cpires-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *ret;
	t_list *tmp;

	if (!f)
		return (NULL);
	ret = NULL;
	while (lst)
	{
		tmp = f(lst);
		ft_lstappend(&ret, tmp);
		lst = lst->next;
	}
	return (ret);
}

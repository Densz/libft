/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstselectsort.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzheng <dzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 10:13:08 by dzheng            #+#    #+#             */
/*   Updated: 2017/02/15 18:12:05 by dzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list			*ft_lstselectsort(t_list *lst, int (*cmp)(void*, void*))
{
	t_list		*cur1;
	t_list		*cur2;
	t_list		tmp;

	cur1 = lst;
	while (cur1)
	{
		cur2 = cur1->next;
		while (cur2)
		{
			if (cmp(cur1->content, cur2->content) == 0)
			{
				tmp.content = cur2->content;
				cur2->content = cur1->content;
				cur1->content = tmp.content;
			}
			cur2 = cur2->next;
		}
		cur1 = cur1->next;
	}
	return (lst);
}

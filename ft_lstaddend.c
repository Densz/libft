/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstaddend.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzheng <dzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/09 10:25:14 by dzheng            #+#    #+#             */
/*   Updated: 2017/02/09 10:31:10 by dzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

void		ft_lstaddend(t_list **alst, t_list *new)
{
	if ((*alst)->next != NULL)
		ft_lstaddend(&(*alst)->next, new);
	else
	{
		(*alst)->next = new;
	}
}

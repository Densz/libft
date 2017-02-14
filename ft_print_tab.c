/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzheng <dzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/11 11:06:20 by dzheng            #+#    #+#             */
/*   Updated: 2017/02/11 11:08:05 by dzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_print_tab(int **tab, int line, int column)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (i < line)
	{
		while (j < column)
		{
			ft_printf("%d ", tab[i][j]);
			j++;
		}
		j = 0;
		ft_putstr("\n");
		i++;
	}
}

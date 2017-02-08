/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_signed.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzheng <dzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 15:45:53 by dzheng            #+#    #+#             */
/*   Updated: 2017/02/08 19:46:29 by dzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int				ft_printf_i(va_list ap, t_flags b, char c)
{
	intmax_t	i;
	char		*str;
	int			len;

	if (c == 'd')
		b.which_letter = 'i';
	else
		b.which_letter = c;
	i = arg_signed_modifier(ap, b);
	if (i == 0 && b.size_prec == 0)
		str = ft_strdup("");
	else
		str = ft_itoa_intmax_t(i);
	str = ft_check_if_flags_int(b, str);
	len = ft_free_return(&str);
	return (len);
}

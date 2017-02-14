/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrijoin.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dzheng <dzheng@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/14 19:07:06 by dzheng            #+#    #+#             */
/*   Updated: 2017/02/14 19:27:40 by dzheng           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_join(char *str, int *i, char const *s2, const char *s3)
{
	int		j;

	j = 0;
	while (s2[j])
	{
		str[*i] = s2[j];
		(*i)++;
		j++;
	}
	j = 0;
	while (s3[j])
	{
		str[*i] = s3[j];
		(*i)++;
		j++;
	}
	str[*i] = '\0';
	return (str);
}

char	*ft_strtrijoin(char const *s1, char const *s2, const char *s3)
{
	char	*str;
	int		i;

	i = 0;
	if (s1 == NULL || s2 == NULL || s3 == NULL)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen(s1) +\
			ft_strlen(s2) + ft_strlen(s3) + 1));
	if (str == NULL)
		return (NULL);
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str = ft_join(str, &i, s2, s3);
	return (str);
}

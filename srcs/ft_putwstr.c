/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <fdel-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/09 17:56:33 by fdel-car          #+#    #+#             */
/*   Updated: 2018/12/19 16:29:19 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stddef.h>

int		ft_size_uni(int c)
{
	if (c < 128)
		return (1);
	if (c < 2048)
		return (2);
	if (c < 65536)
		return (3);
	if (c < 1114112)
		return (4);
	return (-1);
}

int		ft_wstrlen(wchar_t const *s)
{
	int o;

	o = 0;
	while (*s)
	{
		o += ft_size_uni(*s);
		s++;
	}
	return (o);
}

int		ft_putwstr(wchar_t const *s, int l)
{
	int i;
	int	o;
	int w;
	int	u;

	w = ft_wstrlen(s);
	o = 0;
	i = 0;
	if (l < 0 || l > w)
		l = w;
	while (i < l && s[i])
	{
		u = ft_size_uni(s[i]);
		if (l < w && l > 0)
		{
			o += u;
			if (o > l)
				return (o - u);
			o -= u;
		}
		o += ft_putchar(s[i]);
		i++;
	}
	return (o);
}

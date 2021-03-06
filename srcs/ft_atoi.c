/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <fdel-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/27 14:54:26 by fdel-car          #+#    #+#             */
/*   Updated: 2018/12/19 16:21:43 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_unload(const char *nptr, int i, int j, int sign)
{
	int a;
	int b;

	b = 1;
	a = 0;
	while (nptr[i] <= 32 && nptr[i] >= 0)
		i++;
	if (nptr[i] == '+')
		i++;
	else if (nptr[i] == '-')
	{
		sign = -1;
		i++;
	}
	i--;
	while (ft_isdigit(nptr[++i]))
		j++;
	while (j-- > 0)
	{
		a = a + ((nptr[--i] - 48) * b);
		b = b * 10;
	}
	return (a * sign);
}

int			ft_atoi(const char *nptr)
{
	if (!nptr)
		return (0);
	return (ft_unload(nptr, 0, 0, 1));
}

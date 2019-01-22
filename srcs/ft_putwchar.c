/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putwchar.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <fdel-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:58:08 by fdel-car          #+#    #+#             */
/*   Updated: 2018/12/19 16:18:34 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_write(unsigned int c)
{
	write(1, &c, 1);
}

int			ft_putwchar(unsigned int c, int lc)
{
	if (c < 128 || lc == 0)
		ft_write(c);
	else if (c < 2048)
	{
		ft_write(192 | (c >> 6));
		ft_write(128 | (c & 63));
		return (2);
	}
	else if (c < 65536)
	{
		ft_write(224 | (c >> 12));
		ft_write(128 | ((c >> 6) & 63));
		ft_write(128 | (c & 63));
		return (3);
	}
	else if (c < 1114112)
	{
		ft_write(240 | (c >> 18));
		ft_write(128 | ((c >> 12) & 63));
		ft_write(128 | ((c >> 6) & 63));
		ft_write(128 | (c & 63));
		return (4);
	}
	return (1);
}

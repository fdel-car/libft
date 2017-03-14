/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:58:08 by fdel-car          #+#    #+#             */
/*   Updated: 2016/04/22 17:40:19 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

static void	ft_help(unsigned int c)
{
	write(1, &c, 1);
}

int			ft_putchar(unsigned int c)
{
	if (c < 128)
		ft_help(c);
	else if (c < 2048)
	{
		ft_help(192 | (c >> 6));
		ft_help(128 | (c & 63));
		return (2);
	}
	else if (c < 65536)
	{
		ft_help(224 | (c >> 12));
		ft_help(128 | ((c >> 6) & 63));
		ft_help(128 | (c & 63));
		return (3);
	}
	else if (c < 1114112)
	{
		ft_help(240 | (c >> 18));
		ft_help(128 | ((c >> 12) & 63));
		ft_help(128 | ((c >> 6) & 63));
		ft_help(128 | (c & 63));
		return (4);
	}
	return (1);
}
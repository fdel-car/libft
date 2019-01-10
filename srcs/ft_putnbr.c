/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <fdel-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 19:12:51 by fdel-car          #+#    #+#             */
/*   Updated: 2019/01/10 15:48:29 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putunbr(unsigned long long int n)
{
	if (n > 9)
	{
		ft_putunbr(n / 10);
		ft_putunbr(n % 10);
		return ;
	}
	else
	{
		ft_putchar(n + 48);
	}
}

void	ft_putnbr(long long int n)
{
	if (n < 0)
	{
		ft_putchar('-');
		if (n == -__LONG_LONG_MAX__ - 1)
			ft_putunbr((unsigned long long int)__LONG_LONG_MAX__ + 1);
		else
			n = -n;
	}
	if (n > 9)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
		return ;
	}
	else
	{
		ft_putchar(n + 48);
	}
}

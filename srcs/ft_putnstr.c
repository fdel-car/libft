/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <fdel-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 18:59:42 by fdel-car          #+#    #+#             */
/*   Updated: 2018/12/19 16:08:09 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

int		ft_putnstr(char const *s, size_t n)
{
	size_t temp;

	temp = ft_strlen(s);
	if (n > temp)
		n = temp;
	write(1, s, n);
	return (n);
}

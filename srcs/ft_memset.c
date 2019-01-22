/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <fdel-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/24 16:31:59 by fdel-car          #+#    #+#             */
/*   Updated: 2018/12/19 16:28:18 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*temp;

	if (n == 0)
		return (s);
	temp = (unsigned char*)s;
	while (n >= 1)
	{
		*temp = (unsigned char)c;
		n--;
		temp++;
	}
	return (s);
}

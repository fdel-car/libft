/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <fdel-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 18:49:00 by fdel-car          #+#    #+#             */
/*   Updated: 2018/12/19 16:25:33 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dest, const void *src, int c, size_t n)
{
	char	*str_dest;
	char	*str_src;
	size_t	i;

	str_dest = (char*)dest;
	str_src = (char*)src;
	i = 0;
	while (i < n)
	{
		i++;
		*str_dest = *str_src;
		if (*str_dest == c)
			return (dest + i);
		str_dest++;
		str_src++;
	}
	return (NULL);
}
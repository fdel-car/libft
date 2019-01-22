/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <fdel-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 17:53:03 by fdel-car          #+#    #+#             */
/*   Updated: 2018/12/19 16:14:06 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	dest_len;
	size_t	i;

	i = 0;
	while (dest[i] && i < size)
		i++;
	dest_len = i;
	while (src[i - dest_len] && i < (size - 1))
	{
		dest[i] = src[i - dest_len];
		i++;
	}
	if (i < size)
		dest[i] = '\0';
	return (dest_len + ft_strlen(src));
}

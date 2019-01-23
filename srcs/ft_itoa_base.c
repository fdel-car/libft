/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <fdel-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/04/28 17:19:57 by fdel-car          #+#    #+#             */
/*   Updated: 2019/01/23 15:05:26 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_null(void)
{
	char *str;

	str = (char *)malloc(sizeof(char) * 2);
	str[0] = '0';
	str[1] = '\0';
	return (str);
}

char	*ft_itoa_base(unsigned long long nbr, int base)
{
	static char	base_char[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8',
								'9', 'a', 'b', 'c', 'd', 'e', 'f'};
	int			number[64];
	char		*str;
	int			i;
	int			j;

	if (nbr == 0)
		return (ft_null());
	i = 0;
	while (nbr != 0)
	{
		number[i++] = nbr % base;
		nbr = nbr / base;
	}
	str = (char *)malloc(sizeof(char) * (i + 1));
	j = 0;
	while (--i >= 0)
		str[j++] = base_char[number[i]];
	str[j] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_islower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fdel-car <fdel-car@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/08 16:39:10 by fdel-car          #+#    #+#             */
/*   Updated: 2015/12/08 19:42:04 by fdel-car         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	return (0);
}

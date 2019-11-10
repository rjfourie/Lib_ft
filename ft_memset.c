/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/03 20:25:24 by rfourie           #+#    #+#             */
/*   Updated: 2018/06/06 15:17:58 by rfourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*point;
	int				i;

	i = 0;
	point = (unsigned char *)b;
	while (len > 0)
	{
		point[i] = c;
		i++;
		len--;
	}
	return (b);
}

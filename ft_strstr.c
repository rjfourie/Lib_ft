/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/06 16:12:54 by rfourie           #+#    #+#             */
/*   Updated: 2018/06/06 17:30:47 by rfourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int	hc;
	int	nc;
	int	nsize;

	hc = 0;
	nc = 0;
	nsize = ft_strlen(needle);
	if (nsize == 0)
		return ((char *)haystack);
	while (haystack[hc] != '\0')
	{
		while (needle[nc] == haystack[hc + nc])
		{
			if (nc == nsize - 1)
				return ((char *)haystack + hc);
			nc++;
		}
		nc = 0;
		hc++;
	}
	return (0);
}

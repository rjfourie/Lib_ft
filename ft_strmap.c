/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rfourie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/06/09 16:20:16 by rfourie           #+#    #+#             */
/*   Updated: 2018/06/09 18:59:29 by rfourie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	int		i;
	char	*nstr;

	if (!f || !s)
		return (NULL);
	i = 0;
	nstr = (char *)ft_memalloc(ft_strlen(s) + 1);
	if (nstr)
	{
		while (s[i])
		{
			nstr[i] = f((char)s[i]);
			i++;
		}
		nstr[i] = '\0';
	}
	return (nstr);
}

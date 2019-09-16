/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/16 22:03:49 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/16 22:18:13 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t			i;
	unsigned char	*mem1;
	unsigned char	*mem2;

	i = 1;
	mem1 = (unsigned char*)s1;
	mem2 = (unsigned char*)s2;
	while (*mem1 == *mem2 && i < n)
	{
		mem1++;
		mem2++;
		i++;
	}
	if (i <= n)
		return (*mem1 - *mem2);
	return (0);
}

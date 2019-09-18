/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/18 23:28:21 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/19 00:15:43 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dest, const char *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;
	size_t	x;

	x = 0;
	i = n;
	s1 = dest;
	s2 = (char*)src;
	while (*s1 && --i)
	{
		x++;
		s1++;
	}
	while (*s2)
	{
		if (i < (n))
			*s1 = *s2;
		i++;
		s1++;
		s2++;
		x++;
	}
	*s1 = 0;

	return (x);
}

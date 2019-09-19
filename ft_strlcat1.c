/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 20:46:26 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/19 22:55:40 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	sum;
	size_t	l1;
	char	*s1;
	char	*s2;
	int 	i;

	i = 0;
	if (*dst == 0 && *src == 0)
		return (0);
	sum = 0;
	s1 = dst;
	s2 = (char*)src;
	while (*(s1++) && sum < size)
		sum++;
	l1 = sum;
	while (*(s2++))
		sum++;
	s1--;
	s2 = (char*)src;
	while (l1++ < (size - 1) && *(s2++) && size)
	{
		*(s1++) = *(s2 - 1);
		i = 1;
	}
	if (i)
		*s1 = 0;
	return (sum);
}

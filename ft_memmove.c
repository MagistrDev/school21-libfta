/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_memove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 23:05:43 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/15 23:21:37 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*mem;
	unsigned char	*str;

	if (dest == NULL && src == NULL)
		return (NULL);
	mem = (unsigned char *)dest;
	str = (unsigned char *)src;
	while (n--)
	{
		*(mem + n) = *(str + n);
	}
	return (dest);
}

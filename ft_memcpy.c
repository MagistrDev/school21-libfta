/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/15 21:45:35 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/15 22:37:36 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
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

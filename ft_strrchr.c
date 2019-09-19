/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/19 23:49:22 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/19 23:51:49 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char			*str;
	char			*ptr;
	unsigned char	ch;

	if (s == NULL)
		return (NULL);
	ptr = NULL;
	ch = (unsigned char)c;
	str = (char*)s;
	while (*str)
	{
		if (*str == c)
			ptr = str;
		str++;
	}
	if (c == 0)
		return (str);
	return (ptr);
}

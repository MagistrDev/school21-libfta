/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:02:05 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/26 22:09:52 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	char	*st1;
	char	*st2;
	size_t	i;

	if (s1 == NULL || s2 == NULL)
		return (NULL);
	i = 0;
	st1 = (char*)s1;
	while (*st1++)
		i++;
	st1 = (char*)s2;
	while (*st1++)
		i++;
	if (!(st1 = (char*)malloc(i)))
		return (NULL);
	str = st1;
	st2 = (char*)s1;
	while (*st2++)
		*st1++ = *(st2 - 1);
	st2 = (char*)s2;
	while (*st2++)
		*st1++ = *(st2 - 1);
	*st1 = 0;
	return (str);
}

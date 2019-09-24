/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 21:39:36 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/25 00:27:48 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

char	*ft_strtrim(char const *s)
{
	char	*str;
	char	*s1;
	size_t	i;

	if (s == NULL)
		return (NULL);
	i = 1;
	s1 = (char*)s;
	while (*s1 == 32 || *s1 == 9 || *s1 == 10)
		s1++;
	while (*s1++)
		i++;
	s1 -= 2;
	while ((*(s1) == 32 || *(s1) == 9 || *(s1) == 10) && --i > 0)
		s1--;
	if (!(str = (char*)malloc(i)))
		return (NULL);
	*(str + i - 1) = 0;
	while (i-- > 0)
		*(str + i - 1) = *s1--;
	return (str);
}

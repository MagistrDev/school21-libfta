/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_wordlen.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/27 03:27:23 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/27 03:36:37 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

t_size		ft_wordlen(const char *s, char space)
{
	t_size		i;
	char 		*s1;

	if (s == NULL)
		return (0);
	s1 = (char*)s;
	i = 0;
	while (*s1 == space && *s1)
		s1++;
	while (*s1 != space && *s1)
	{
		i++;
		s1++;
	}
	return (i);
}

#include <stdio.h>
int main()
{
	printf ("%i\n", ft_wordlen("dfsdf|", '|'));
	printf ("%i\n", ft_wordlen("|dfsdf|", '|'));
	printf ("%i\n", ft_wordlen("|||||dfsdf||||||||", '|'));
	printf ("%i\n", ft_wordlen("|12345678|", '|'));

	return (0);
}

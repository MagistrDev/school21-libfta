/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/24 00:18:09 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/24 01:49:38 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>

char	**ft_strsplit(char const *s, char c)
{
	char	**ar;
	char	*str;
	int		flag;
	size_t	i;

	ar = NULL;
	flag = 0;
	i = 1;
	str = (char*)s;
	while (*str == c)
		str++;
	while (*str++)
		i += (*(str - 1) == c && *str != c && *str != 0) ? 1 : 0;
	if (!(ar = (char**)malloc(sizeof(char*) * (i + 1))))
		return (NULL);
	str = (char*)s;
			printf("%zu",i);
	return (ar);
}



void hop()
{
	while (*s)
		i++;
	str = (char**)malloc(i);

}

int		main(int argc, char **argv)
{
	if (argc == 3)
		ft_strsplit(argv[1], argv[2][0]);
	return (0);
}

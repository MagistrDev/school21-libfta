/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/25 01:20:38 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/25 02:03:07 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char	*ft_itoa(int n)
{
	int		i;
	int		nbr;
	char	*s;

	i = 1;
	nbr = n;
	while ((nbr /= 10) != 0)
		i++;
	if (!(s = (char*)malloc(i + 1 + ((n < 0) ? 1 : 0))))
		return(NULL);
	*(s + i + ((n < 0) ? 1 : 0)) = 0;
	//*s = ((n < 0) ? '-' : *s);
	while (n != 0)
	{
		*(s + i - 1 + ((n < 0) ? 1 : 0)) = n % 10 + '0';
		printf("'%c'",*(s + i - 1 + ((n < 0) ? 1 : 0)));
		n /= 10;
		i--;
	}
	return (s);
}
int main()
{
	printf ("\n|%s|\n",ft_itoa(-1123));
	return (0);
}

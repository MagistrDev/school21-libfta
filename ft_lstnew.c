/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecelsa <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/26 23:22:49 by ecelsa            #+#    #+#             */
/*   Updated: 2019/09/27 01:14:11 by ecelsa           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*nl;

	if (!(nl = (t_list*)malloc(sizeof(t_list*))))
		return (NULL);
	nl->content_size = (content == 0) ? 0 : content_size;
	nl->next = NULL;
	if (content == NULL)
		nl->content = NULL;
	else
	{
		if (!(nl->content = (void*)malloc(content_size)))
		{
			free(nl);
			nl = NULL;
			return (NULL);
		}
	}
	ft_memcpy(nl->content, content, content_size);
	return (nl);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 13:43:36 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/10/19 14:41:26 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new_node;

	new_node = malloc(sizeof(t_list));
	if (!new_node)
		return (NULL);
	new_node->content = content;
	new_node->next = NULL;
	return (new_node);
}
/*
#include <stdio.h>
int	main(void)
{
	char	*s = ft_strdup("Hello World");
	if (!s)
		return (1);
	t_list	*new = ft_lstnew(s);
	if (!new)
	{	
		free(new);
		return (1);
	}
	printf("%s\n", (char *)new->content);
	printf("%p\n", new->next);
	free(s);
	if (new)
		free(new);
	return (0);
}*/

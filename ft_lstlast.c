/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 16:51:29 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/10/20 10:54:20 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	t_list	*current;

	if (lst == NULL)
		return (NULL);
	current = NULL;
	while (current->next != NULL)
		current = current->next;
	return (current);
}
/*
#include <stdio.h>
int	main(void)
{
	t_list	*lst = NULL;

	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("5")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("4")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("3")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("2")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("1")));
	ft_lstadd_front(&lst, ft_lstnew(ft_strdup("dernier")));

	printf("%s\n", (char *)ft_lstlast(lst->content));
	return (0);
}
*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 17:30:15 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/10/15 17:52:06 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (big[i] && i < len)
	{
		j = 0;
		if (big[i] == little[0] && i < len)
		{
			while (big[i + j] == little[j] && (i + j) < len && little[j])
				j++;
			if (little[j] == '\0')
				return ((char *) &big[i]);
		}
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{
	const char	big[] = "bienvenu a tokyo!";
	const char	little[] = " a";

	printf("mine: %s\n", ft_strnstr(big, little, 17));
	printf("og: %s\n", strnstr(big, little, 17));
	return (0);
}*/

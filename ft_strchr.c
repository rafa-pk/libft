/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:02:44 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/10/15 13:16:58 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	ch;

	i = 0;
	ch = (char) c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((char *) &s[i]);
		i++;
	}
	if (s[i] == '\0')
		return ((char *) &s[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int	main(void)
{
	const char	s[] = "pipicaca";

	printf("mine: %s\n", ft_strchr(s, 'i'));
	printf("og: %s\n", strchr(s, 'i'));
	return (0);
}*/

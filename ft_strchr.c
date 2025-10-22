/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/15 13:02:44 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/10/21 23:43:16 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t			i;
	unsigned char	ch;

	i = 0;
	ch = (unsigned char) c;
	while (s[i])
	{
		if (s[i] == ch)
			return ((unsigned char *) &s[i]);
		i++;
	}
	if (ch  == '\0')
		return ((unsigned char *) &s[i]);
	return (NULL);
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

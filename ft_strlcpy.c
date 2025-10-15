/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/14 15:56:31 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/10/14 16:36:42 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dsize)
{
	size_t	i;

	i = 0;
	if (dsize == 0)
		return (ft_strlen(src));
	while (src[i] && i < dsize - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}

#include <stdio.h>
#include <bsd/string.h>
int	main(void)
{ 
	char	dst[8];
	char	src[] = "Hello WOrld";

	printf("mine: %zu\n", ft_strlcpy(dst, src, sizeof(dst)));
	printf("og: %zu\n", strlcpy(dst, src, sizeof(src)));
	return (0);
}

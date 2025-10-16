/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/16 13:24:40 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/10/16 22:29:33 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	char_in_set(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while(s1[i])
	{
		while (set[j])
		{
			if (s1[i] == set[j])
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	start;
	size_t	end;
	char	*trim;

	i = 0;
	start = 0;
	end = ft_strlen(s1);
	while (char_in_set(s1, set))
		start++;
	while (char_in_set(s1, set))
		end--;
	trim = malloc(sizeof(char) * (end - start) + 1);
	if (!trim)
		return (NULL);
	while (start < end)
	{
		trim[i] = s1[start];
		i++;
		start++;
	}
	trim[i] = '\0';
	return (trim);
}

#include <stdio.h>
int	main(void)
{
	char const	s1[] = "    .cacazoe123pipi.    ";
	char const	set[] = " .cacapipi";
	char *result = ft_strtrim(s1, set);

	printf("%s\n", result);
	free(result);
	return (0);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <rvaz-da-@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/01 13:20:15 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/10/13 12:21:09 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if ((c >= 0 && c <= 32) || c == 32)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_isprint('&'));
	printf("%d\n", ft_isprint(32));
	return (0);
}*/

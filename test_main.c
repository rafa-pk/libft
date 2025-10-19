/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test_main.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvaz-da- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 11:00:52 by rvaz-da-          #+#    #+#             */
/*   Updated: 2025/10/19 13:06:34 by rvaz-da-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <ctype.h>
#include <stdio.h>
#include <string.h>
/*
int	main(void)
{
	//LIBC FUNCTIONS
	printf("\n\tLIBC FUNCTIONS:\n\n\n");
		
		//FT_ISALPHA
		printf("FT_ISALPHA:\n");
		printf("[0: not in alphabet 1: in alphabet]\n\n");
		printf("A (uppercase letter): %d\t\t\t\treal function: %d [non-zero value (true)]\n", ft_isalpha('A'), isalpha('A'));
		printf("z (lowercase letter): %d\t\t\t\treal function: %d [non-zero value (true)]\n", ft_isalpha('z'), isalpha('z'));
		printf("'8' (char 8, ascii 56): %d\t\t\treal function: %d\n", ft_isalpha('8'), isalpha('8'));
		printf("'\\' (char backslah, ascii 92): %d\t\treal function: %d\n", ft_isalpha('\\'), isalpha('\\'));
		printf("' ' (space, ascii 32): %d\t\t\treal function: %d\n", ft_isalpha(' '), isalpha(' '));
		printf("DEL (ascii 127): %d\t\t\t\treal function: %d\n", ft_isalpha(127), isalpha(127));
		printf("out of ascii bounds character (129): %d\t\treal function: %d\n", ft_isalpha(129), isalpha(129));

		//FT_ISDIGIT
		printf("\n\nFT_ISDIGIT:\n");
		printf("[0: non-valid digit 1: valid digit]\n\n");
		printf("A (uppercase letter): %d\t\t\t\treal function: %d\n", ft_isdigit('A'), isdigit('A'));
		printf("z (lowercase letter): %d\t\t\t\treal function: %d\n", ft_isdigit('z'), isdigit('z'));
		printf("'8' (char 8, ascii 56): %d\t\t\treal function: %d [non-zero value (true)]\n", ft_isdigit('8'), isdigit('8'));
		printf("7 (ascii 7): %d\t\t\t\t\treal function: %d\n", ft_isdigit(7), isdigit(7));
		printf("'\\' (char backslah, ascii 92): %d\t\treal function: %d\n", ft_isdigit('\\'), isdigit('\\'));
		printf("' ' (space, ascii 32): %d\t\t\treal function: %d\n", ft_isdigit(' '), isdigit(' '));
		printf("DEL (ascii 127): %d\t\t\t\treal function: %d\n", ft_isdigit(127), isdigit(127));
		printf("out of ascii bounds character (129): %d\t\treal function: %d\n", ft_isdigit(129), isdigit(129));

		//FT_ISALNUM
		printf("\n\nFT_ISALNUM:\n");
		printf("[0: non alphanumeric 1: alphanumeric]\n\n");
		printf("A (uppercase letter): %d\t\t\t\treal function: %d [non-zero value (true)]\n", ft_isalnum('A'), isalnum('A'));
		printf("z (lowercase letter): %d\t\t\t\treal function: %d [non-zero value (true)]\n", ft_isalnum('z'), isalnum('z'));
		printf("'8' (char 8, ascii 56): %d\t\t\treal function: %d [non-zero value (true)]\n", ft_isalnum('8'), isalnum('8'));
		printf("7 (ascii 7): %d\t\t\t\t\treal function: %d\n", ft_isalnum(7), isalnum(7));
		printf("'\\' (char backslah, ascii 92): %d\t\treal function: %d\n", ft_isalnum('\\'), isalnum('\\'));
		printf("' ' (space, ascii 32): %d\t\t\treal function: %d\n", ft_isalnum(' '), isalnum(' '));
		printf("DEL (ascii 127): %d\t\t\t\treal function: %d\n", ft_isalnum(127), isalnum(127));
		printf("out of ascii bounds character (129): %d\t\treal function: %d\n", ft_isalnum(129), isalnum(129));

		//FT_ISASCII
		printf("\n\nFT_ISASCII:\n");
		printf("[0: non-ascii 1: ascii]\n\n");
		printf("A (uppercase letter): %d\t\t\t\treal function: %d\n", ft_isascii('A'), isascii('A'));
		printf("z (lowercase letter): %d\t\t\t\treal function: %d\n", ft_isascii('z'), isascii('z'));
		printf("'8' (char 8, ascii 56): %d\t\t\treal function: %d\n", ft_isascii('8'), ft_isascii('8'));
		printf("7 (ascii 7): %d\t\t\t\t\treal function: %d\n", ft_isascii(7), isascii(7));
		printf("'\\' (char backslah, ascii 92): %d\t\treal function: %d\n", ft_isascii('\\'), isascii('\\'));
		printf("' ' (space, ascii 32): %d\t\t\treal function: %d\n", ft_isascii(' '), isascii(' '));
		printf("-9 (negative value): %d\t\t\t\treal function: %d\n", ft_isascii(-9), isascii(-9));
		printf("out of ascii bounds character (129): %d\t\treal function: %d\n", ft_isascii(129), isascii(129));

		//FT_ISPRINT
		printf("\n\nFT_ISPRINT:\n");
		printf("[0: non-printable 1: printable]\n\n");
		printf("A (uppercase letter): %d\t\t\t\treal function: %d [non-zero value (true)]\n", ft_isprint('A'), isprint('A'));
		printf("z (lowercase letter): %d\t\t\t\treal function: %d [non-zero value (true)]\n", ft_isprint('z'), isprint('z'));
		printf("'8' (char 8, ascii 56): %d\t\t\treal function: %d [non-zero value (true)]\n", ft_isprint('8'), isprint('8'));
		printf("7 ('\a', ascii 7): %d\t\t\t\treal function: %d\n", ft_isprint(7), isprint(7));
		printf("'\\' (char backslah, ascii 92): %d\t\treal function: %d [non-zero value (true)]\n", ft_isprint('\\'), isprint('\\'));
		printf("' ' (space, ascii 32): %d\t\t\treal function: %d [non-zero value (true)]\n", ft_isprint(' '), isprint(' '));
		printf("DEL (ascii 127): %d\t\t\t\treal function: %d\n", ft_isprint(127), isprint(127));
		printf("out of ascii bounds character (129): %d\t\treal function: %d\n", ft_isprint(129), isprint(129));
		
		//FT_STRLEN
		printf("\n\nFT_STRLEN:\n");
		printf("Normal string [Hello World!]: %zu\t\treal function: %zu\n", ft_strlen("Hello world!"), strlen("Hello World!"));
		printf("Empty string []: %zu\t\t\t\treal function: %zu\n", ft_strlen(""), strlen(""));
		printf("String with spaces[    ]: %zu\t\t\treal function: %zu\n", ft_strlen("    "), strlen("    "));
		printf("Special characters [!@#$]: %zu\t\t\treal function: %zu\n", ft_strlen("!@#$"), strlen("!@#$"));
		printf("With null character [Hello Wo(null)rld]: %zu\treal function: %zu\n", ft_strlen("Hello Wo\0rld"), strlen("Hello Wo\0rld"));
		printf("Huge string [aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa]: %zu\n", ft_strlen("aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"));


	return (0);
}*/

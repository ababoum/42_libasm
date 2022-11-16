/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:32:47 by mababou           #+#    #+#             */
/*   Updated: 2022/11/16 16:08:21 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include "libasm/libasm.h"

int main(void)
{
	// {
	// 	printf("=========STRLEN=========\n");
	// 	printf("=====LIBASM=====\n");
	// 	{
	// 		printf("Test: bonjour\n");
	// 		int c = ft_strlen("bonjour");
	// 		printf("%d\n", c);
	// 	}
	// 	printf("======LIBC======\n");
	// 	{
	// 		printf("Test: bonjour\n");
	// 		int c = strlen("bonjour");
	// 		printf("%d\n", c);
	// 	}
	// 	printf("=====LIBASM=====\n");
	// 	{
	// 		printf("Test: newline\n");
	// 		int c = ft_strlen("\n");
	// 		printf("%d\n", c);
	// 	}
	// 	printf("======LIBC======\n");
	// 	{
	// 		printf("Test: newline\n");
	// 		int c = strlen("\n");
	// 		printf("%d\n", c);
	// 	}
	// 	printf("=====LIBASM=====\n");
	// 	{
	// 		printf("Test: empty string\n");
	// 		int c = ft_strlen("");
	// 		printf("%d\n", c);
	// 	}
	// 	printf("======LIBC======\n");
	// 	{
	// 		printf("Test: empty string\n");
	// 		int c = strlen("");
	// 		printf("%d\n", c);
	// 	}
	// }
	// {
	// 	printf("=========STRCPY=========\n");
	// 	printf("=====LIBASM=====\n");
	// 	{
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("Test: bonjour\n");
	// 		printf("%s\n", ft_strcpy(dest, "bonjour"));
	// 		printf("%s\n", dest);
	// 		free(dest);
	// 	}
	// 	printf("======LIBC======\n");
	// 	{
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("Test: bonjour\n");
	// 		printf("%s\n", strcpy(dest, "bonjour"));
	// 		printf("%s\n", dest);
	// 		free(dest);
	// 	}
	// 	printf("=====LIBASM=====\n");
	// 	{
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("Test: empty\n");
	// 		printf("'%s'\n", ft_strcpy(dest, ""));
	// 		printf("'%s'\n", dest);
	// 		free(dest);
	// 	}
	// 	printf("======LIBC======\n");
	// 	{
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("Test: empty\n");
	// 		printf("'%s'\n", strcpy(dest, ""));
	// 		printf("'%s'\n", dest);
	// 		free(dest);
	// 	}
	// 	printf("=====LIBASM=====\n");
	// 	{
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("Test: héhé\n");
	// 		printf("%s\n", ft_strcpy(dest, "héhé"));
	// 		printf("%s\n", dest);
	// 		free(dest);
	// 	}
	// 	printf("======LIBC======\n");
	// 	{
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("Test: héhé\n");
	// 		printf("%s\n", strcpy(dest, "héhé"));
	// 		printf("%s\n", dest);
	// 		free(dest);
	// 	}
	// }
	{
		printf("=========STRCMP=========\n");
		printf("=====LIBASM=====\n");
		{
			printf("Test: aaaa vs aaaa\n");
			printf("%d\n", ft_strcmp("aaaa", "aaaa"));
		}
		printf("======LIBC======\n");
		{
			printf("Test: aaaa vs aaaa\n");
			printf("%d\n", strcmp("aaaa", "aaaa"));
		}
		printf("=========STRCMP=========\n");
		printf("=====LIBASM=====\n");
		{
			printf("Test: aaaa vs bbbb\n");
			printf("%d\n", ft_strcmp("aaaa", "bbbb"));
		}
		printf("======LIBC======\n");
		{
			printf("Test: aaaa vs bbbb\n");
			printf("%d\n", strcmp("aaaa", "bbbb"));
		}
	}
}
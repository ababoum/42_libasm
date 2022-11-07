/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:32:47 by mababou           #+#    #+#             */
/*   Updated: 2022/11/07 15:56:47 by mababou          ###   ########.fr       */
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
	// 		printf("bonjour\n");
	// 		int c = ft_strlen("bonjour");
	// 		printf("%d\n", c);
	// 	}
	// 	printf("======LIBC======\n");
	// 	{
	// 		printf("bonjour\n");
	// 		int c = strlen("bonjour");
	// 		printf("%d\n", c);
	// 	}
	// 	printf("=====LIBASM=====\n");
	// 	{
	// 		printf("newline\n");
	// 		int c = ft_strlen("\n");
	// 		printf("%d\n", c);
	// 	}
	// 	printf("======LIBC======\n");
	// 	{
	// 		printf("newline\n");
	// 		int c = strlen("\n");
	// 		printf("%d\n", c);
	// 	}
	// 	printf("=====LIBASM=====\n");
	// 	{
	// 		printf("empty string\n");
	// 		int c = ft_strlen("");
	// 		printf("%d\n", c);
	// 	}
	// 	printf("======LIBC======\n");
	// 	{
	// 		printf("empty string\n");
	// 		int c = strlen("");
	// 		printf("%d\n", c);
	// 	}
	// }
	{
		printf("=========STRCPY=========\n");
		printf("=====LIBASM=====\n");
		{
			char *dest = calloc(10, 1);
			memset(dest, 'a', 9);
			printf("bonjour\n");
			printf("%s\n", ft_strcpy(dest, "bonjour"));
			printf("%s\n", dest);
			free(dest);
		}
		printf("======LIBC======\n");
		{
			char *dest = calloc(10, 1);
			memset(dest, 'a', 9);
			printf("bonjour\n");
			printf("%s\n", strcpy(dest, "bonjour"));
			printf("%s\n", dest);
			free(dest);
		}
	}
}
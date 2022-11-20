/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:32:47 by mababou           #+#    #+#             */
/*   Updated: 2022/11/20 17:10:44 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libasm/libasm.h"

int main(void)
{
	// {
	// 	printf("============STRLEN============\n");
	// 	printf("Test: bonjour\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf("%d\n", ft_strlen("bonjour"));
	// 		printf("======LIBC======\n");
	// 		printf("%d\n", strlen("bonjour"));
	// 	}
	// 	printf("Test: newline\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf("%d\n", ft_strlen("\n"));
	// 		printf("======LIBC======\n");
	// 		printf("%d\n", strlen("\n"));
	// 	}
	// 	printf("Test: empty string\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf("%d\n", ft_strlen(""));
	// 		printf("======LIBC======\n");
	// 		printf("%d\n", strlen(""));
	// 	}
	// }
	// {
	// 	printf("============STRCPY============\n");
	// 	printf("Test: bonjour\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("%s\n", ft_strcpy(dest, "bonjour"));
	// 		printf("%s\n", dest);
	// 		free(dest);
	// 	}
	// 	{
	// 		printf("======LIBC======\n");
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("%s\n", strcpy(dest, "bonjour"));
	// 		printf("%s\n", dest);
	// 		free(dest);
	// 	}
	// 	printf("Test: empty\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("'%s'\n", ft_strcpy(dest, ""));
	// 		printf("'%s'\n", dest);
	// 		free(dest);
	// 	}
	// 	{
	// 		printf("======LIBC======\n");
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("'%s'\n", strcpy(dest, ""));
	// 		printf("'%s'\n", dest);
	// 		free(dest);
	// 	}
	// 	printf("Test: héhé\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("%s\n", ft_strcpy(dest, "héhé"));
	// 		printf("%s\n", dest);
	// 		free(dest);
	// 	}
	// 	{
	// 		printf("======LIBC======\n");
	// 		char *dest = calloc(10, 1);
	// 		memset(dest, 'a', 9);
	// 		printf("%s\n", strcpy(dest, "héhé"));
	// 		printf("%s\n", dest);
	// 		free(dest);
	// 	}
	// }
	// {
	// 	printf("============STRCMP============\n");
	// 	printf("Test: aaaa vs aaaa\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf("%d\n", ft_strcmp("aaaa", "aaaa"));
	// 		printf("======LIBC======\n");
	// 		printf("%d\n", strcmp("aaaa", "aaaa"));
	// 	}

	// 	printf("Test: aaaa vs bbbb\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf("%d\n", ft_strcmp("aaaa", "bbbb"));
	// 		printf("======LIBC======\n");
	// 		printf("%d\n", strcmp("aaaa", "bbbb"));
	// 	}
	// 	printf("Test: 1234 vs 12345\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf("%d\n", ft_strcmp("1234", "12345"));
	// 		printf("======LIBC======\n");
	// 		printf("%d\n", strcmp("1234", "12345"));
	// 	}
	// 	printf("Test: 12345 vs 1234\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf("%d\n", ft_strcmp("12345", "1234"));
	// 		printf("======LIBC======\n");
	// 		printf("%d\n", strcmp("12345", "1234"));
	// 	}
	// 	printf("Test: empty vs empty\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf("%d\n", ft_strcmp("", ""));
	// 		printf("======LIBC======\n");
	// 		printf("%d\n", strcmp("", ""));
	// 	}
	// 	printf("Test: $$ vs $/\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf("%d\n", ft_strcmp("$$", "$/"));
	// 		printf("======LIBC======\n");
	// 		printf("%d\n", strcmp("$$", "$/"));
	// 	}
	// }
	// {
	// 	printf("============WRITE============\n");
	// 	printf(">> Test: bonjour STDOUT\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf(" %zd\n", ft_write(1, "bonjour", 7));
	// 		printf("======LIBC======\n");
	// 		printf(" %zd\n", write(1, "bonjour", 7));
	// 	}
	// 	printf(">> Test: bonjour STDERR\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf(" %zd\n", ft_write(2, "bonjour", 7));
	// 		printf("======LIBC======\n");
	// 		printf(" %zd\n", write(2, "bonjour", 7));
	// 	}
	// 	printf(">> Test: write on inexistant fd\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf(" %zd\n", ft_write(11, "bonjour", 7));
	// 		perror("FT_WRITE");
	// 		printf("======LIBC======\n");
	// 		printf(" %zd\n", write(11, "bonjour", 7));
	// 		perror("WRITE");
	// 	}
	// 	printf(">> Test: wrong parameters\n");
	// 	{
	// 		printf("=====LIBASM=====\n");
	// 		printf(" %zd\n", ft_write(1, "bonjour", -1));
	// 		perror("FT_WRITE");
	// 		printf("======LIBC======\n");
	// 		printf(" %zd\n", write(1, "bonjour", -1));
	// 		perror("WRITE");
	// 	}
	// }
	{
		printf("============READ============\n");
		printf(">> Test: from file\n");
		{
			char	buf[1000] = {0};
			int fd = open("./example_input", O_RDONLY);
			printf("=====LIBASM=====\n");
			printf(" %zd\n", ft_read(fd, buf, 10));
			printf("%s\n", buf);
			close(fd);
		}
		{
			char	buf[1000] = {0};
			int fd = open("./example_input", O_RDONLY);
			printf("======LIBC======\n");
			printf(" %zd\n", read(fd, buf, 10));
			printf("%s\n", buf);
			memset(buf, 0, 1000);
			close(fd);
		}
		// printf(">> Test: from STDIN\n");
		// {
		// 	char	buf[1000] = {0};
		// 	int fd = open("./example_input", O_RDONLY);
		// 	printf("=====LIBASM=====\n");
		// 	printf(" %zd\n", ft_read(0, buf, 10));
		// 	printf("%s\n", buf);
		// 	close(fd);
		// }
		// {
		// 	char	buf[1000] = {0};
		// 	int fd = open("./example_input", O_RDONLY);
		// 	printf("======LIBC======\n");
		// 	printf(" %zd\n", read(0, buf, 10));
		// 	printf("%s\n", buf);
		// 	memset(buf, 0, 1000);
		// 	close(fd);
		// }
		printf(">> Test: wrong file descriptor\n");
		{
			char	buf[1000] = {0};
			int fd = open("./example_input", O_RDONLY);
			printf("=====LIBASM=====\n");
			printf(" %zd\n", ft_read(100, buf, 10));
			printf("%s\n", buf);
			close(fd);
			perror("FT_READ");
		}
		{
			char	buf[1000] = {0};
			int fd = open("./example_input", O_RDONLY);
			printf("======LIBC======\n");
			printf(" %zd\n", read(100, buf, 10));
			printf("%s\n", buf);
			memset(buf, 0, 1000);
			close(fd);
			perror("READ");
		}
	}
}
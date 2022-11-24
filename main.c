/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mababou <mababou@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:32:47 by mababou           #+#    #+#             */
/*   Updated: 2022/11/24 21:13:19 by mababou          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <stdlib.h>
#include <fcntl.h>
#include "libasm/libasm.h"

#define F_NONE "\033[37;0m"
#define F_BOLD "\033[1m"
#define F_ORANGE "\033[38m"
#define F_RED "\033[31m"
#define F_YELLOW "\033[33m"
#define F_GREEN "\033[32m"
#define F_CYAN "\033[36m"
#define F_BLUE "\033[34m"

int main(void)
{
	{
		printf("============STRLEN============\n");
		printf("%s>> Test: bonjour\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%zu\n", ft_strlen("bonjour"));
			printf("======LIBC======\n");
			printf("%zu\n", strlen("bonjour"));
		}
		printf("%s>> Test: newline\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%zu\n", ft_strlen("\n"));
			printf("======LIBC======\n");
			printf("%zu\n", strlen("\n"));
		}
		printf("%s>> Test: empty string\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%zu\n", ft_strlen(""));
			printf("======LIBC======\n");
			printf("%zu\n", strlen(""));
		}
		printf("%s>> Test: very long string\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%zu\n", ft_strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."));
			printf("======LIBC======\n");
			printf("%zu\n", strlen("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."));
		}
	}
	{
		printf("============STRCPY============\n");
		printf("%s>> Test: bonjour\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			char *dest = calloc(10, 1);
			memset(dest, 'a', 9);
			printf("%s\n", ft_strcpy(dest, "bonjour"));
			printf("%s\n", dest);
			free(dest);
		}
		{
			printf("======LIBC======\n");
			char *dest = calloc(10, 1);
			memset(dest, 'a', 9);
			printf("%s\n", strcpy(dest, "bonjour"));
			printf("%s\n", dest);
			free(dest);
		}
		printf("%s>> Test: empty\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			char *dest = calloc(10, 1);
			memset(dest, 'a', 9);
			printf("'%s'\n", ft_strcpy(dest, ""));
			printf("'%s'\n", dest);
			free(dest);
		}
		{
			printf("======LIBC======\n");
			char *dest = calloc(10, 1);
			memset(dest, 'a', 9);
			printf("'%s'\n", strcpy(dest, ""));
			printf("'%s'\n", dest);
			free(dest);
		}
		printf("%s>> Test: héhé\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			char *dest = calloc(10, 1);
			memset(dest, 'a', 9);
			printf("%s\n", ft_strcpy(dest, "héhé"));
			printf("%s\n", dest);
			free(dest);
		}
		{
			printf("======LIBC======\n");
			char *dest = calloc(10, 1);
			memset(dest, 'a', 9);
			printf("%s\n", strcpy(dest, "héhé"));
			printf("%s\n", dest);
			free(dest);
		}
		printf("%s>> Test: very long string\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			char *dest = calloc(1000, 1);
			memset(dest, 'a', 999);
			printf("%s\n", ft_strcpy(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."));
			printf("%s\n", dest);
			free(dest);
		}
		{
			printf("======LIBC======\n");
			char *dest = calloc(1000, 1);
			memset(dest, 'a', 999);
			printf("%s\n", strcpy(dest, "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum."));
			printf("%s\n", dest);
			free(dest);
		}
	}
	{
		printf("============STRCMP============\n");
		printf("%s>> Test: aaaa vs aaaa\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%d\n", ft_strcmp("aaaa", "aaaa"));
			printf("======LIBC======\n");
			printf("%d\n", strcmp("aaaa", "aaaa"));
		}
		printf("%s>> Test: aaaa vs bbbb\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%d\n", ft_strcmp("aaaa", "bbbb"));
			printf("======LIBC======\n");
			printf("%d\n", strcmp("aaaa", "bbbb"));
		}
		printf("%s>> Test: 1234 vs 12345\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%d\n", ft_strcmp("1234", "12345"));
			printf("======LIBC======\n");
			printf("%d\n", strcmp("1234", "12345"));
		}
		printf("%s>> Test: 12345 vs 1234\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%d\n", ft_strcmp("12345", "1234"));
			printf("======LIBC======\n");
			printf("%d\n", strcmp("12345", "1234"));
		}
		printf("%s>> Test: empty vs empty\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%d\n", ft_strcmp("", ""));
			printf("======LIBC======\n");
			printf("%d\n", strcmp("", ""));
		}
		printf("%s>> Test: empty vs something\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%d\n", ft_strcmp("", "something"));
			printf("======LIBC======\n");
			printf("%d\n", strcmp("", "something"));
		}
		printf("%s>> Test: something vs empty\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%d\n", ft_strcmp("something", ""));
			printf("======LIBC======\n");
			printf("%d\n", strcmp("something", ""));
		}
		printf("%s>> Test: $$ vs $\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%d\n", ft_strcmp("$$", "$"));
			printf("======LIBC======\n");
			printf("%d\n", strcmp("$$", "$"));
		}
		printf("%s>> Test: $ vs $$\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf("%d\n", ft_strcmp("$", "$$"));
			printf("======LIBC======\n");
			printf("%d\n", strcmp("$", "$$"));
		}
	}
	{
		printf("============WRITE============\n");
		printf("%s>> Test: bonjour STDOUT\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf(" %zd\n", ft_write(1, "bonjour", 7));
			printf("======LIBC======\n");
			printf(" %zd\n", write(1, "bonjour", 7));
		}
		printf("%s>> Test: bonjour STDERR\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf(" %zd\n", ft_write(2, "bonjour", 7));
			printf("======LIBC======\n");
			printf(" %zd\n", write(2, "bonjour", 7));
		}
		printf("%s>> Test: write on inexistant fd\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf(" %zd\n", ft_write(11, "bonjour", 7));
			perror("FT_WRITE");
			printf("======LIBC======\n");
			printf(" %zd\n", write(11, "bonjour", 7));
			perror("WRITE");
		}
		printf("%s>> Test: wrong parameters\n%s", F_YELLOW, F_NONE);
		{
			printf("=====LIBASM=====\n");
			printf(" %zd\n", ft_write(1, "bonjour", -1));
			perror("FT_WRITE");
			printf("======LIBC======\n");
			printf(" %zd\n", write(1, "bonjour", -1));
			perror("WRITE");
		}
	}
	{
		printf("============READ============\n");
		printf("%s>> Test: from valid file\n%s", F_YELLOW, F_NONE);
		{
			char buf[1000] = {0};
			int fd = open("./example_input", O_RDONLY);
			printf("=====LIBASM=====\n");
			printf(" %zd\n", ft_read(fd, buf, 10));
			printf("%s\n", buf);
			close(fd);
		}
		{
			char buf[1000] = {0};
			int fd = open("./example_input", O_RDONLY);
			printf("======LIBC======\n");
			printf(" %zd\n", read(fd, buf, 10));
			printf("%s\n", buf);
			memset(buf, 0, 1000);
			close(fd);
		}
		printf("%s>> Test: from STDIN\n%s", F_YELLOW, F_NONE);
		{
			char buf[1000] = {0};
			int fd = open("./example_input", O_RDONLY);
			printf("=====LIBASM=====\n");
			printf(" %zd\n", ft_read(0, buf, 10));
			printf("%s\n", buf);
			close(fd);
		}
		{
			char buf[1000] = {0};
			int fd = open("./example_input", O_RDONLY);
			printf("======LIBC======\n");
			printf(" %zd\n", read(0, buf, 10));
			printf("%s\n", buf);
			memset(buf, 0, 1000);
			close(fd);
		}
		printf("%s>> Test: wrong file descriptor\n%s", F_YELLOW, F_NONE);
		{
			char buf[1000] = {0};
			printf("=====LIBASM=====\n");
			printf(" %zd\n", ft_read(100, buf, 10));
			printf("%s\n", buf);
			perror("FT_READ");
		}
		{
			char buf[1000] = {0};
			printf("======LIBC======\n");
			printf(" %zd\n", read(100, buf, 10));
			printf("%s\n", buf);
			memset(buf, 0, 1000);
			perror("READ");
		}
		printf("%s>> Test: wrong size\n%s", F_YELLOW, F_NONE);
		{
			char buf[1000] = {0};
			int fd = open("./example_input", O_RDONLY);
			printf("=====LIBASM=====\n");
			printf(" %zd\n", ft_read(fd, buf, -1));
			printf("%s\n", buf);
			close(fd);
			perror("FT_READ");
		}
		{
			char buf[1000] = {0};
			int fd = open("./example_input", O_RDONLY);
			printf("======LIBC======\n");
			printf(" %zd\n", read(fd, buf, -1));
			printf("%s\n", buf);
			memset(buf, 0, 1000);
			close(fd);
			perror("READ");
		}
	}
	{
		printf("============STRDUP============\n");
		printf("%s>> Test: small string\n%s", F_YELLOW, F_NONE);
		{
			char *s1 = ft_strdup("lala!");
			printf("%s\n", s1);
			free(s1);
		}
		{
			char *s1 = strdup("lala!");
			printf("%s\n", s1);
			free(s1);
		}
		printf("%s>> Test: empty string\n%s", F_YELLOW, F_NONE);
		{
			char *s1 = ft_strdup("");
			printf("%s$\n", s1);
			free(s1);
		}
		{
			char *s1 = strdup("");
			printf("%s$\n", s1);
			free(s1);
		}
		printf("%s>> Test: very long string\n%s", F_YELLOW, F_NONE);
		{
			char *s1 = ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.");
			printf("%s\n", s1);
			if (!s1)
				perror("FT_STRDUP");
			else
				free(s1);
		}
		printf("*********************\n");
		{
			char *s1 = ft_strdup("Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.");
			printf("%s\n", s1);
			free(s1);
		}
	}
}
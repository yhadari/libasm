/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 18:06:43 by yhadari           #+#    #+#             */
/*   Updated: 2020/12/21 20:05:54 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/uio.h>
#include <fcntl.h>

size_t      ft_strlen(char *str);
char        *ft_strcpy(char * dst, const char * src);
int         ft_strcmp(const char *s1, const char *s2);
ssize_t     ft_write(int fildes, const void *buf, size_t nbyte);
ssize_t     ft_read(int fildes, void *buf, size_t nbyte);
char        *ft_strdup(const char *s1);

int         main()
{
    char    p[100] = "hello world!?";

    printf("|%zu|\n", ft_strlen(p));
    printf("|%zu|\n", strlen(p));
    
printf ("-----------------------------------------\n");
     char   ptr[100] = "hello world!";
     char   str[100] = "papapapapapap";

     printf("|%s|\n", ft_strcpy(ptr, str));
     printf("|%s|\n", strcpy(ptr, str));
     
printf ("-----------------------------------------\n");
     char   ptr1[100] = "hadari";
     char   str1[100] = "hadari";

     printf("|%d|\n", ft_strcmp(ptr1, str1));
     printf("|%d|\n", strcmp(ptr1, str1));
    
printf ("-----------------------------------------\n");
    char    buf[100] = "libasm";
    
    printf("|%zd|\n", ft_write(1, buf, 20));
    printf("|%zd|\n", write(1, buf, 20));

printf ("-----------------------------------------\n");
    char    p1[100] = "fh7ya1234567890";
    char    p2[100] = "fh7ya1234567890";

    int     fd = open("ft_strlen.s", O_RDWR);
    int     fd1 = open("ft_strlen.s", O_RDWR);
    printf("|%zd||%s|\n", ft_read(fd, p1, 10), p1);
    printf("|%zd||%s|\n", read(fd1, p2, 10), p2);
    
printf ("-----------------------------------------\n");
    char    s1[100] = "yhadafhhdio";

    printf("|%p|\n", ft_strdup(s1));
    printf("|%p|\n", strdup(s1));
    printf("|%p|\n", s1);
    
    return (0);
}
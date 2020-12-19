/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/15 18:06:43 by yhadari           #+#    #+#             */
/*   Updated: 2020/12/19 18:10:48 by yhadari          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <unistd.h>

size_t      ft_strlen(char *str);
char        *ft_strcpy(char * dst, const char * src);
int         ft_strcmp(const char *s1, const char *s2);
ssize_t     ft_write(int fildes, const void *buf, size_t nbyte);

int         main()
{
    int     i;
    char    p[100] = "       12";

    i = 0;
    printf("|%zu|\n", ft_strlen(p));
    printf("|%zu|\n", strlen(p));
// -----------------------------------------
     char   a[100] = "12345";
     char   b[100] = "67789";

     printf("|%s|\n", ft_strcpy(a, b));
     printf("|%s|\n", strcpy(a, b));
     
// -----------------------------------------
     
     char   c[100] = "   yhadari";
     char   d[100] = "  yassine";

     printf("|%d|\n", ft_strcmp(c, d));
     printf("|%d|\n", strcmp(c, d));
    
// -----------------------------------------
   
    char    e[100] = "yassin";
    
    printf("|%zd|\n", write(1, &e, 90));
    printf("|%zd|\n", ft_write(1, &e, 90));
    return (0);
}
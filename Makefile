# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/13 17:50:40 by yhadari           #+#    #+#              #
#    Updated: 2020/12/21 20:01:19 by yhadari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libasm

NASM = nasm -fmacho64 ft_strlen.s &&\
	nasm -fmacho64 ft_strcpy.s &&\
	nasm -fmacho64 ft_strcmp.s &&\
	nasm -fmacho64 ft_write.s &&\
	nasm -fmacho64 ft_read.s &&\
	nasm -fmacho64 ft_strdup.s

O = ft_strlen.o ft_strcpy.o ft_strcmp.o\
	ft_write.o ft_read.o ft_strdup.o

all : $(NAME)

$(NAME) :
		@clear
		@$(NASM)
		@gcc -Wall -Werror -Wextra -g main.c $(O) -o $(NAME)
		@./$(NAME)

clean :
		@rm -rf *.o

fclean : clean
		@rm -rf $(NAME)
	
re : fclean all
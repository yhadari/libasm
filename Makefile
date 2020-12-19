# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yhadari <yhadari@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/12/13 17:50:40 by yhadari           #+#    #+#              #
#    Updated: 2020/12/19 17:19:49 by yhadari          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


NAME = libasm

NASM = nasm -fmacho64 ft_strlen.s &&\
	nasm -fmacho64 ft_strcpy.s &&\
	nasm -fmacho64 ft_strcmp.s &&\
	nasm -fmacho64 ft_write.s

O = ft_strlen.o ft_strcpy.o ft_strcmp.o ft_write.o

all : $(NAME)

$(NAME) :
		@clear
		@$(NASM)
		@gcc -g main.c $(O) -o $(NAME)
		@./$(NAME)

clean :
		@rm -rf *.o

fclean : clean
		@rm -rf $(NAME)
	
re : fclean all
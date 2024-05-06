# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dasal <dasal@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 15:40:37 by dominicasal       #+#    #+#              #
#    Updated: 2024/05/04 10:15:04 by dasal            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
CC = cc
FLAGS = -Wall -Wextra -Werror
SRCS = $(wildcard *.c)
SRCSB = ft_lstadd_back_bonus.c ft_lstadd_front_bonus.c ft_lstclear_bonus.c\
	ft_lstdelone_bonus.c ft_lstlast_bonus.c ft_lstnew_bonus.c\
	ft_lstsize_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c
OBJS = ${SRCS:.c=.o}
OBJSB = ${SRCSB:.c=.o}
LIB = ar rcs
RM = rm -f

.c.o:
	${CC} ${FLAGS} -c $< -o ${<:.c=.o}
${NAME}: ${OBJS}
	${LIB} ${NAME} ${OBJS}
all: ${NAME}
bonus: ${NAME} ${OBJSB}
	${LIB} ${NAME} ${OBJSB}
clean:
	${RM} ${OBJS} ${OBJSB}
fclean: clean
	${RM} ${NAME}
re: fclean all

.PHONY : all bonus clean fclean re





# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mababou <mababou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 21:14:07 by mababou           #+#    #+#              #
#    Updated: 2022/11/04 21:52:57 by mababou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm

SRCS = hello.s

OBJS = ${SRCS:.s=.o}

# compilation parameters
ASM		= nasm
ASFLAGS	= -f elf64
LD 		= ld
# LDFLAGS	= -s
RM		= rm -rf


# compilation
%.o: %.s
	$(ASM) $(ASFLAGS) $< -o $@


# rules
all: $(NAME)

$(NAME):	$(OBJS)
	$(LD) $(LDFLAGS) $(OBJS) -o $(NAME)

re:			fclean all

clean:
			${RM} $(OBJS)

fclean: 	clean
			${RM} $(NAME)
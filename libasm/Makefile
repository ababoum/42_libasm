# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mababou <mababou@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/04 21:14:07 by mababou           #+#    #+#              #
#    Updated: 2022/11/20 17:00:30 by mababou          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libasm.a

SRCS = ft_strlen.s \
		ft_strcpy.s \
		ft_strcmp.s \
		ft_write.s \
		ft_read.s

OBJS = ${SRCS:.s=.o}

# compilation parameters
ASM		= nasm
ASFLAGS	= -f elf64 -g
LD 		= ar rcs
LDFLAGS	= -s
RM		= rm -rf


# compilation
%.o: %.s
	$(ASM) $(ASFLAGS) $<


# rules
all: $(NAME)

$(NAME):	$(OBJS)
	$(LD) $(LDFLAGS) $(NAME) $(OBJS)

re:			fclean all

clean:
			${RM} $(OBJS)

fclean: 	clean
			${RM} $(NAME)
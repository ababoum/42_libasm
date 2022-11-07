F_NONE		= \033[37;0m
F_BOLD		= \033[1m
F_ORANGE	= \033[38m
F_RED		= \033[31m
F_YELLOW	= \033[33m
F_GREEN		= \033[32m
F_CYAN		= \033[36m
F_BLUE		= \033[34m

CC			= @gcc

CFLAGS		= -Wall -Wextra -Werror -g

SRCS		= main.c

INCLUDES	= libasm/libasm.h
LIBASM 		= libasm/libasm.a

OBJS		= $(SRCS:.c=.o)

NAME		= test

all:	$(NAME)

libasm:
		make -C ./libasm

$(NAME): libasm $(OBJS) $(INCLUDES) 
		$(CC) $(CFLAGS) $(OBJS) $(LIBASM) -o $(NAME)
		@echo "$(F_GREEN)$(F_BOLD) $(NAME) executable is compiled and ready.$(F_NONE)"

clean:
		make -C ./libasm clean
		@rm -f $(OBJS)
		@echo "$(F_CYAN)$(F_BOLD) .o files successfully deleted.$(F_NONE)"

fclean:	clean
		make -C ./libasm fclean
		@rm -f $(NAME)
		@echo "$(F_CYAN)$(F_BOLD) $(NAME) executable successfully deleted.$(F_NONE)"

re:	fclean $(NAME)

.PHONY: clean fclean all re libasm
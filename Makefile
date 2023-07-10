NAME	= libftprintf.a

SRCS	= ft_printf.c \
	   	ft_numbers.c \
		ft_words.c \

OBJS	= $(SRCS:.c=.o)

DEPS    = $(OBJS:%.o=%.d)

CC	= gcc

RM	= rm -f

CFLAGS	= -MMD -Wall -Wextra -Werror

all:	$(NAME)

$(NAME):	$(OBJS)
			ar rcs $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

-include $(DEPS)

.PHONY:		all clean fclean re

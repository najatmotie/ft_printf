
NAME = libftprintf.a

CC = cc

CFLAGS = -Wall -Wextra -Werror

AR = ar -rc

RM = rm -rf

SRC = ft_printf.c ft_putchar.c ft_putstr.c ft_putnbr.c ft_putunbr.c ft_putadr.c ft_putlower_hexa.c ft_putupper_hexa.c

OBJ = ${SRC:.c=.o}

$(NAME): $(OBJ)
	$(AR) $(NAME) $(OBJ)

%.o:%.c ft_printf.h
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)
 
clean :
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all
NAME		= libftprintf.a
INCLUDE		= include
SRC	= src/
OBJ_DIR		= obj/
CC			= gcc
CFLAGS		= -Wall -Werror -Wextra -I
RM			= rm -f
AR			= ar rcs


#Sources

SRC	=	ft_printf ft_print_hex ft_print_nbr ft_print_unsigned ft_print_ptr


SRC 		= 	$(addprefix $(SRC), $(addsuffix .c, $(SRC)))
OBJ 		= 	$(addprefix $(OBJ), $(addsuffix .o, $(SRC)))

all:		$(NAME)

$(NAME):	$(OBJ)
			@$(AR) $(NAME) $(OBJ)

$(OBJ)%.o: $(SRC)%.c | $(OBJF)
			@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

$(OBJF):
			@mkdir -p $(OBJ)

clean:
			@$(RM) -rf $(OBJ)

fclean:		clean
			@$(RM) -f $(NAME)


re:			fclean all


.PHONY:		all clean fclean re
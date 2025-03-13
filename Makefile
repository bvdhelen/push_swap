# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 00:01:37 by eldiaz-c          #+#    #+#              #
#    Updated: 2025/03/13 22:00:14 by eldiaz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de la biblioteca
NAME = push_swap

# Compilador y banderas de compilación
CC = gcc
RM = rm -f
FLAGS = -Wall -Werror -Wextra
LIBFT_DIR = libft/

# Archivos fuente y archivos objeto
SRC_1 = ./push_swap.c \

SRC_2 =	algorithm/ft_less_rotations.c \
		algorithm/ft_rotate_and_push.c \
		algorithm/ft_sort_3.c \
		algorithm/ft_sort_b_till_3.c \
		algorithm/ft_sort_b.c \
		algorithm/ft_sort_a.c \
		algorithm/ft_sort.c \
		checks/check_alpha.c \
		checks/check_args.c \
		checks/check_duplicates.c \
		checks/check_number.c \
		checks/check_order.c \
		checks/ft_free.c \
		checks/ft_error.c \
		operations/push_a.c \
		operations/push_b.c \
		operations/reverse_rotate_a.c \
		operations/reverse_rotate_ab.c \
		operations/reverse_rotate_b.c \
		operations/rotate_a.c \
		operations/rotate_ab.c \
		operations/rotate_b.c \
		operations/swap_a.c \
		operations/swap_ab.c \
		operations/swap_b.c \
		process/ft_atoi2.c \
		process/fill_stack.c \
		process/list_args.c \
		process/parse_args.c \
		process/process.c \
		process/sub_process.c \
		stack_utils/cases_ab.c \
		stack_utils/cases_ba.c \
		stack_utils/ft_add_back.c \
		stack_utils/ft_find_index.c \
		stack_utils/ft_find_place_a.c \
		stack_utils/ft_find_place_b.c \
		stack_utils/ft_lstlast.c \
		stack_utils/ft_lstsize.c \
		stack_utils/ft_new_node.c \
		stack_utils/ft_min.c \
		stack_utils/ft_max.c \
		

OBJ_1 = $(SRC_1:.c=.o)
OBJ_2 = $(SRC_2:.c=.o)

# Archivo de encabezado
INCLUDE = -L ./libft -lft

# Regla para crear los archivos objeto (.o)
.c.o:
	$(CC) -c $< -o $@

# Regla para compilar push_swap con libft
$(NAME): $(OBJ_1) $(OBJ_2)
	make -C $(LIBFT_DIR)
	$(CC) $(FLAGS) $(OBJ_1) $(OBJ_2) -o $(NAME) $(INCLUDE)

# Regla principal que lo compila todo
all: $(NAME) $(LIBFT)

# Eliminar todos los archivos .o y .a
clean:
	$(RM) $(OBJ_1) $(OBJ_2) $(NAME)
	@cd $(LIBFT_DIR) && $(MAKE) clean 

fclean: clean
	$(RM) $(NAME)
	@cd $(LIBFT_DIR) && $(MAKE) fclean

re: fclean all

# Indica que las siguientes reglas no son archivos reales
.PHONY: all clean fclean re

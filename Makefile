# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eldiaz-c <eldiaz-c@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/10/08 00:48:17 by eldiaz-c          #+#    #+#              #
#    Updated: 2024/10/22 18:23:37 by eldiaz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de la biblioteca
NAME = push_swap

# Compilador y banderas de compilacion
CC = cc
CFLAGS = -Wall -Werror -Wextra -g3

# Archivos fuente y archivos objeto
SOURCES = push_swap.c \
		algorithm/ft_less_rotations_ab.c \
		algorithm/ft_less_rotations_ba.c \
		algorithm/ft_apply_ra_rb.c \
		algorithm/ft_apply_ra_rrb.c \
		algorithm/ft_apply_rra_rb.c \
		algorithm/ft_apply_rra_rrb.c \
		algorithm/ft_sort_3.c \
		algorithm/ft_sort_till_3.c \
		algorithm/ft_prepare_sorting.c \
		algorithm/ft_insert_sorted.c \
		algorithm/ft_sort.c \
		checks/check_alpha.c \
		checks/check_args.c \
		checks/check_duplicates.c \
		checks/check_number.c \
		checks/check_order.c \
		checks/ft_free_stack.c \
		checks/ft_free_str.c \
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
		process/fill_stack.c \
		process/ft_atoi2.c \
		process/ft_parse_args.c \
		process/ft_process.c \
		process/ft_sub_process.c \
		process/list_args.c \
		process/validate_args.c \
		stack_utils/ft_add_back.c \
		stack_utils/ft_case_ra_rb.c \
		stack_utils/ft_case_ra_rb_A.c \
		stack_utils/ft_case_ra_rrb.c \
		stack_utils/ft_case_ra_rrb_A.c \
		stack_utils/ft_case_rra_rb.c \
		stack_utils/ft_case_rra_rb_A.c \
		stack_utils/ft_case_rra_rrb.c \
		stack_utils/ft_case_rra_rrb_A.c \
		stack_utils/ft_find_index.c \
		stack_utils/ft_find_place_a.c \
		stack_utils/ft_find_place_b.c \
		stack_utils/last.c \
		stack_utils/max.c \
		stack_utils/min.c \
		stack_utils/new_node.c \
		stack_utils/size.c \

OBJECTS = $(SOURCES:.c=.o)

# Archivo de encabezado
INCLUDE = ./includes/push_swap.h

# Regla para compilar push_swap con libft
$(NAME): $(OBJECTS)
	@cd libft && make
	$(CC) $(CFLAGS) $(OBJECTS) ./libft/libft.a -o $(NAME) $(INCLUDE)

# Regla para crear los archivos objeto (.o)
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Regla que lo compila todo
all: $(NAME)

# Eliminar todos los archivos .o y .a
clean:
	@rm -f $(OBJECTS) $(NAME)
	@cd libft && make clean

fclean: clean
	@rm -f $(NAME)
	@cd libft && make fclean

re: fclean all

# Indica que las siguientes reglas no son archivos reales
.PHONY: all clean fclean re

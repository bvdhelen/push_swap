# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eldiaz-c <eldiaz-c@student.42madrid.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/03/12 00:01:37 by eldiaz-c          #+#    #+#              #
#    Updated: 2025/03/20 18:47:49 by eldiaz-c         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Nombre del archivo de la biblioteca
NAME = push_swap

# Compilador y banderas de compilación
CC = cc
RM = rm -f
FLAGS = -Wall -Werror -Wextra -g3 
LIBFT_DIR = libft/

# Definir códigos de color
BLACK = \033[0;30m
RED = \033[0;31m
GREEN = \033[0;32m
YELLOW = \033[0;33m
BLUE = \033[0;34m
MAGENTA = \033[0;35m
CYAN =  \033[0;36m
WHITE = \033[0;37m
RESET = \033[0m

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
# -L ./libft sirve para decirle donde buscar la biblioteca
# -lft = libft.a sirve para indicar que biblioteca enlazar
INCLUDE = -L ./libft -lft

# Regla para crear los archivos objeto (.o)
# -c indica que se debe commpilar el código sin enlazar (crear solo el .o)
# $< representa el archivo de entrada (el .c que se está compilando)
# -o $@ especifica el nombre del archivo de salida que se está generando
.c.o:
	$(CC) $(FLAGS) -c $< -o $@

# Regla para compilar push_swap con libft
# -C sirve para cambiar al directorio especificado antes de ejecutar el Makefile
$(NAME): header $(OBJ_1) $(OBJ_2) header2
	@make -C $(LIBFT_DIR) --no-print-directory
	@$(CC) $(FLAGS) $(OBJ_1) $(OBJ_2) -o $(NAME) $(INCLUDE)
	@echo
	@echo "$(GREEN)<<< push_swap compiled >>>$(RESET)"
	@echo

# Regla principal que lo compila todo
all: $(NAME) $(LIBFT)

# Eliminar todos los archivos .o y .a
clean:
	@$(RM) $(OBJ_1) $(OBJ_2) */*.o
	@$(MAKE) clean -C $(LIBFT_DIR) --no-print-directory
	@echo
	@echo "$(CYAN)<<< CLEAN COMPLETE >>>$(RESET)"
	@echo

fclean: clean
	@$(RM) $(NAME)
	@$(MAKE) fclean -C $(LIBFT_DIR) --no-print-directory
	@echo "$(BLUE)<<< FULL CLEAN COMPLETE >>>$(RESET)"
	@echo

re: fclean all

# ASCII Art
header:
	@echo
	@echo " $(WHITE)                  _                                "
	@echo " $(WHITE)  _ __  _   _ ___| |__    _____      ____ _ _ __   "
	@echo " $(WHITE) | '_ \| | | / __| '_ \  / __\ \ /\ / / _  | '_ \  "
	@echo " $(WHITE) | |_) | |_| \__ \ | | | \__ \\  V  V / (_| | |_) | "
	@echo " $(WHITE) | .__/ \__,_|___/_| |_| |___/ \_/\_/ \__,_| .__/  "
	@echo " $(WHITE) |_|__  _ __ ___  _   _  ___  ___| |_      |_|     "
	@echo " $(WHITE) | '_ \| '__/ _ \| | | |/ _ \/ __| __|             "
	@echo " $(WHITE) | |_) | | | (_) | |_| |  __/ (__| |_              "
	@echo " $(WHITE) | .__/|_|  \___/ \__, |\___|\___|\__|             "
	@echo " $(WHITE) |_|              |___/                            "
	@echo " $(MAGENTA) "
	@echo
	
header2:
	@echo "$(RESET)"
	@echo "                                                                                                    "
	@echo "                                                                                                    "
	@echo "                                       ░ ░░░░░░░░   ░░░░ ░░░░  ░                                    "
	@echo "                                       ░░░░░░░░░░▒▒▒░░░░░░░░░░░░                                    "
	@echo "                                    ░░░░▒▓█████████████████▓░░░░ ░░░                                "
	@echo "                                 ░░░▒███▓▒░░░░░░░░░ ░░░░░░░▓████▓░░░                                "
	@echo "                               ░░░▓██▓░░░░░░░░          ░ ░░░░░▓███▓░░ ░                            "
	@echo "                              ░░▓██▒░░░                       ░░░░░▓██▓░░                           "
	@echo "                           ░░░░▓█▓░░░░                             ░░▒██▓░░                         "
	@echo "                            ░░░██░░                                 ░░░▒██░░░                       "
	@echo "                            ░░██░░                                    ░░░▓█▒░░░                     "
	@echo "                            ░░█▓░                                       ░░██▒░░                     "
	@echo "                            ░▒█▒░                                       ░ ░██▒░                     "
	@echo "                           ░░██░░                                          ▒██░                     "
	@echo "                            ░██░                      ░░░░░░               ░██░░                    "
	@echo "                            ░██░░░░░░░░░░░░░░░░░░░░░░░░░░░░░░              ░▒█▓░░                   "
	@echo "                            ░██░░░░▒███░░░░░░░░░░░░░░░░░▒███░░             ░░██░░                   "
	@echo "                           ░░██░░░░░░░░░░▒████████████░░░░░░░░░             ░▒█▒                    "
	@echo "                           ░░██░░░░░░░░░░░░                                  ░█▓░░                  "
	@echo "                            ▒█▓░░░░                                          ░██░░                  "
	@echo "                           ░▒█▓░░                                           ░░██▒░                  "
	@echo "                           ░▓█░                                              ░▓█▒░                  "
	@echo "                          ░░█▓░                                             ░░▒██░                  "
	@echo "                          ░██░░░░                                       ░░ ░ ░░██░                  "
	@echo "                        ░░▓█▓░░                                      ░░░░░░░█▒░██░                  "
	@echo "                      ░░░▒██░░░                                     ░░██░░░░██░▓█▒░                 "
	@echo "                      ░░▒██░░░░                                      ░▒█▒░░░██░░█▓░░░               "
	@echo "                   ░░░░░██░░░                                        ░░██▒░░▓█▒░▓█░░░               "
	@echo "                     ░░██░░░                                          ░▒█▓░░▓█░ ▒█▒░░               "
	@echo "                      ▓█▒░                                           ░░░▓█▓▓██░░░██░░               "
	@echo "                   ░░░██░░ ░                                          ░░░░▒▒░░░░░██░░               "
	@echo "                  ░░░▒█▒░░                                              ░░ ░░░  ░██░░░              "
	@echo "               ░    ░██░░░                                                      ░██░░░              "
	@echo "               ░░░░░▒█▒░░                                                       ░██░░               "
	@echo "            ░░░ ░▒▓███░░░░                                                     ░░██░░               "
	@echo "             ░▓███▓░░░░░░░                                                     ░▒█▒░░               "
	@echo "            ░▓█▒░░░░░░░░░░░░░                                       ░░░░░ ░░ ░░░██░░░               "
	@echo "            ░▒█▓░░░░░░░░░░░░░░░░░░░  ░░░░                      ░    ░░░▓▓▓▒░░░░██░░░░               "
	@echo "             ░▒███▓▓▓████████▓▓░░░░░░░░░░░░ ░░░░░░░    ░░░░░   ░░░░░░██▓▓▓█▓░░██░░░                 "
	@echo "               ░░░▒▒░░░░░░░░░░▒██████████████████▓▒▒▒▒▒▒▒▒▓▓▓▓█████▓░░░░░░░░░▒█▒░░                  "
	@echo "                 ░ ░░   ░░    ░░░░░░░░░░░░░░░░░░▒▒▒▒▒▒▒▒▒▒▒▒▒░░░░░▓█▒░░░░░░░░█▓░░░                  "
	@echo "                                              ░░  ░░░░       ░░░░░░▓█▓░░░░▒███░░░░                  "
	@echo "                                                             ░░░░░░░░▓█████▒░░░░░                   "
	@echo "                                                                    ░░░░░░░░                        "
	@echo "                                                                       ░░░                          "
	@echo

# Indica que las siguientes reglas no son archivos reales
.PHONY: all clean fclean re

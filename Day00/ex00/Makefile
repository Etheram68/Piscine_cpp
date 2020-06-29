# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/06/29 15:51:33 by frfrey            #+#    #+#              #
#    Updated: 2020/06/29 15:51:33 by frfrey           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC_PATH		= srcs/

SRCS_NAME		= megaphone.cpp

SRC				= $(addprefix $(SRC_PATH), $(SRCS_NAME))

OBJ_PATH 		= obj/

OBJ_NAME 		= ${SRCS_NAME:.c=.o}

OBJ 			= $(addprefix $(SRC_PATH), $(OBJ_NAME))

NAME			= megaphone

RM				= rm -rf

FLAG			= -Wall -Wextra -Werror -O3

#FLAGS			= -g3 -fsanitize=address

# **************************************************************************** #
#								REGLES									       #
# **************************************************************************** #

all: $(OBJ_PATH) $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAG) $(OBJ) -o $(NAME)
	@printf "\33[2K\r \033[0m\033[0;33mMegaphone: \t\033[0;38;5;121mUpdated\n\033[0m"

$(OBJ_PATH):
	@mkdir -p obj/ 2> /dev/null

$(OBJ_PATH)%.o: $(SRC_PATH)%.c
	@printf "\033[2K\r\033[0;32m[Compiling] : \t\033[0;32m\033[0m$<"
	@clang++ $(FLAG) -c $< -o $@

clean:
	@printf "\033[2K\r\033[31mDeleting Megaphone srcs/	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Megaphone srcs/.	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Megaphone srcs/..	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Megaphone srcs/...	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Megaphone srcs/	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Megaphone srcs/.	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Megaphone srcs/..	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Megaphone srcs/...	\033[37m"
	@sleep 0.1
	@${RM} ${OBJ_PATH}
	@printf "\33[2K\r \033[0;32m[OK] \033[0m \033[36m Deleted successfully!\n\033[0m"

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: clean fclean

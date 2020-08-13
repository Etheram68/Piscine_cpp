# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/08/13 09:22:10 by frfrey            #+#    #+#              #
#    Updated: 2020/08/13 09:22:10 by frfrey           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

SRC_PATH				= srcs/

SRC_NAME				= main.cpp

SRCS					= $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ_NAME				= $(SRC_NAME:.cpp=.o)

OBJ_PATH				= obj/

OBJ						= $(addprefix $(OBJ_PATH), $(OBJ_NAME))

NAME					= array

RM						= rm -rf

FLAG					= -Wall -Wextra -Werror -Wconversion -std=c++98

#FLAGS					= -g3 -fsanitize=address

# **************************************************************************** #
#								REGLES									       #
# **************************************************************************** #

all: $(OBJ_PATH) $(NAME)

$(NAME): $(OBJ)
	@clang++ $(FLAG) $(OBJ) -o $(NAME)
	@printf "\33[2K\r \033[0m\033[0;33mArray: \t\033[0;38;5;121mUpdated\n\033[0m"

$(OBJ_PATH):
	@mkdir -p obj/ 2> /dev/null

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp srcs/Array.tpp
	@printf "\033[2K\r\033[0;32m[Compiling] : \t\033[0;32m\033[0m$<"
	@clang++ $(FLAG) -I srcs/ -c $< -o $@

clean:
	@printf "\033[2K\r\033[31mDeleting Array srcs/	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Array srcs/.	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Array srcs/..	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Array srcs/...	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Array srcs/	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Array srcs/.	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Array srcs/..	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Array srcs/...	\033[37m"
	@sleep 0.1
	@${RM} ${OBJ_PATH}
	@printf "\33[2K\r \033[0;32m[OK] \033[0m \033[36m Deleted successfully!\n\033[0m"

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: clean fclean

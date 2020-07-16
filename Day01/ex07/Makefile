# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frfrey <frfrey@student.42lyon.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/07/15 17:14:28 by frfrey            #+#    #+#              #
#    Updated: 2020/07/15 17:14:28 by frfrey           ###   ########lyon.fr    #
#                                                                              #
# **************************************************************************** #

HEADER					= include/

SRCS_FILE			= $(addprefix file/, file.cpp)

SRC_PATH				= srcs/

SRC_NAME				= main.cpp $(SRCS_FILE)

SRCS					= $(addprefix $(SRC_PATH), $(SRC_NAME))

OBJ_NAME				= $(SRC_NAME:.cpp=.o)

OBJ_PATH				= obj/

OBJ						= $(addprefix $(OBJ_PATH), $(OBJ_NAME))

NAME					= replace

RM						= rm -rf

FLAG					= -Wall -Wextra -Werror -O3 -g3

#FLAGS					= -g3 -fsanitize=address

# **************************************************************************** #
#								REGLES									       #
# **************************************************************************** #

all: $(OBJ_PATH) $(NAME) $(HEADER)

$(NAME): $(OBJ)
	@g++ $(FLAG) $(OBJ) -o $(NAME)
	@printf "\33[2K\r \033[0m\033[0;33mReplace: \t\033[0;38;5;121mUpdated\n\033[0m"

$(OBJ_PATH):
	@mkdir -p obj/ 2> /dev/null
	@mkdir -p obj/file 2> /dev/null

$(OBJ_PATH)%.o: $(SRC_PATH)%.cpp $(HEADER)/replace.h
	@printf "\033[2K\r\033[0;32m[Compiling] : \t\033[0;32m\033[0m$<"
	@g++ $(FLAG) -I $(HEADER) -c $< -o $@

clean:
	@printf "\033[2K\r\033[31mDeleting Replace srcs/	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Replace srcs/.	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Replace srcs/..	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Replace srcs/...	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Replace srcs/	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Replace srcs/.	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Replace srcs/..	\033[37m"
	@sleep 0.1
	@printf "\033[2K\r\033[31mDeleting Replace srcs/...	\033[37m"
	@sleep 0.1
	@${RM} ${OBJ_PATH}
	@printf "\33[2K\r \033[0;32m[OK] \033[0m \033[36m Deleted successfully!\n\033[0m"

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: clean fclean

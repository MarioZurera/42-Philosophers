# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mzurera- <mzurera-@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/08/04 00:35:09 by mzurera-          #+#    #+#              #
#    Updated: 2024/10/06 12:57:55 by mzurera-         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# --- Variables --- #

CC			= clang
CFLAGS		= -Wall -Wextra -Werror -g
NAME		= Philosophers
RM			= rm -rf


# --- Sources --- #

INC			= includes

MUTEX		= mutex.c
TESTS		= test_main.c generic.c
#ENV		=
#INTERNAL	=
#EXEC		=
#PARSE 		=
#PROMPT		=
#UTILS		= ft_isalpha.c ft_isdigit.c ft_isalnum.c \
	ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c \
	ft_bzero.c ft_memcpy.c ft_memmove.c ft_strlcpy.c \
	ft_strlcat.c ft_toupper.c ft_tolower.c ft_strchr.c \
	ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c \
	ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c \
	ft_substr.c ft_strjoin.c ft_strtrim.c ft_split.c \
	ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c \
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
	ft_lstnew_bonus.c ft_lstadd_front_bonus.c ft_lstsize_bonus.c \
	ft_lstlast_bonus.c ft_lstadd_back_bonus.c ft_lstdelone_bonus.c \
	ft_lstclear_bonus.c ft_lstiter_bonus.c ft_lstmap_bonus.c \
	ft_isspace.c ft_isxdigit.c ft_abs.c ft_putchar.c ft_putstr.c \
	ft_strcpy.c ft_imin.c ft_imax.c ft_dmin.c ft_dmax.c \
	ft_strcmp.c ft_free_all.c ft_or.c ft_strjoin_sep.c \
	ft_isnumber.c ft_atol.c len.c

SRC			 = main.c
SRC			+= $(addprefix mutex/,				$(MUTEX))
SRC			+= $(addprefix tests/,			 	$(TESTS))
#SRC		+= $(addprefix env/,			 	 $(ENV))
#SRC		+= $(addprefix internal/,			 $(INTERNAL))
#SRC		+= $(addprefix exec/, 	  			 $(EXEC))
#SRC		+= $(addprefix parse/,    			 $(PARSE))
#SRC		+= $(addprefix prompt/,   			 $(PROMPT))
#SRC		+= $(addprefix utils/,         		 $(UTILS))

TESTS_FILES	 = $(addprefix tests/, $(TESTS))
STANDARD_SRC = $(filter-out $(TESTS_FILES),  $(SRC))

TEST_SRC	 = $(filter-out main.c, 			$(SRC))
TEST_SRC	+= $(addprefix tests/Unity/src/, 	unity.c)

OBJ			 = $(STANDARD_SRC:.c=.o)
TEST_OBJ	 = $(TEST_SRC:.c=.o)
ALL_OBJ		 = $(SRC:.c=.o)


# --- Targets --- #

%.o: %.c
	$(CC) $(CFLAGS) -I$(INC) -c $^ -o $@

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJ)

clean:
	$(RM) $(ALL_OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean all

norm:
	@norminette $(SRC) $(INC)

run: all
	@clear ; ./$(NAME)

test: $(TEST_OBJ)
	$(CC) $(CFLAGS) -o test $(TEST_OBJ)

.PHONY: all clean fclean re norm run test

# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lwarlop <lwarlop@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/06 14:19:10 by lwarlop           #+#    #+#              #
#    Updated: 2024/02/22 01:03:18 by lwarlop          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	libft.a

SRCS_DIR	=	src/
OBJS_DIR	=	obj/

CC		=	cc
CFLAGS		=	-Wall -Wextra -Werror

RMFLAGS		=	rm -rf
ARFLAGS		=	ar -rcs

SUB_DIRS	=	ft_is/ ft_to/ ft_str/ ft_mem/ ft_put/ ft_ext/ ft_print/ ft_len/

SRCS		=	$(foreach dir,$(SUB_DIRS),$(wildcard $(SRCS_DIR)$(dir)*.c))

TOTAL_FILES	:=	$(words $(SRCS))

OBJS		=	$(SRCS:$(SRCS_DIR)%.c=$(OBJS_DIR)%.o)

RESET = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

all:		$(NAME)

$(NAME):	$(OBJS)
	@$(ARFLAGS) $(NAME) $(OBJS)
	@echo "$(CYAN) LIBFT $(RESET)\t : $(GREEN) COMPILED ($(TOTAL_FILES) files) $(RESET)"

$(OBJS_DIR)%.o: $(SRCS_DIR)%.c
	@mkdir -p $(@D)
	@echo "$(CYAN) LIBFT $(RESET)\t : $(YELLOW) Compiling $< $(RESET)"
	@$(CC) $(CFLAGS) -I. -c $< -o $@

clean:
	@$(RMFLAGS) $(OBJS_DIR)
	@echo "$(CYAN) LIBFT $(RESET)\t : $(RED) CLEAN $(RESET)"

fclean: clean
	@$(RM) $(NAME)
	@echo "$(CYAN) LIBFT $(RESET)\t : $(RED) FULL CLEAN $(RESET)"

re: fclean all

.PHONY: all clean fclean re

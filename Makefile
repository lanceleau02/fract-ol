# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: laprieur <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/30 13:59:33 by laprieur          #+#    #+#              #
#    Updated: 2023/02/28 15:19:21 by laprieur         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

MANDATORY_NAME	:=	fractol
BONUS_NAME		:=	fractol_bonus

#-------------------------------#
#          INGREDIENTS          #
#-------------------------------#

LIBFT			:=	libft/libft.a

MINILIBX		:=	minilibx/libmlx.a

MANDATORY		:=	mandatory/error.c			\
					mandatory/events.c			\
					mandatory/fractol.c			\
					mandatory/hooks.c			\
					mandatory/image.c			\
					mandatory/main.c			\
					mandatory/maths.c			\
					mandatory/mlx.c				\
					mandatory/sets.c			\

BONUS			:=	bonus/error_bonus.c			\
					bonus/events_bonus.c		\
					bonus/events_plus_bonus.c	\
					bonus/fractol_bonus.c		\
					bonus/hooks_bonus.c			\
					bonus/image_bonus.c			\
					bonus/main_bonus.c			\
					bonus/maths_bonus.c			\
					bonus/mlx_bonus.c			\
					bonus/sets_bonus.c			\

MANDATORY_OBJS	:=	$(MANDATORY:%.c=.build/%.o)
BONUS_OBJS		:=	$(BONUS:%.c=.build/%.o)
DEPS			:=	$(MANDATORY_OBJS:%.o=%.d) $(BONUS_OBJS:%.o=%.d)

CC				:=	clang
CFLAGS			:=	-Wall -Wextra -Werror -Ofast
CPPFLAGS		:=	-MP -MMD -Iinclude -Iminilibx -Ilibft/include
LDFLAGS			:=	-Llibft -lft -Lminilibx -lmlx -lXext -lX11 -lm -lz

#----------------------------#
#          UTENSILS          #
#----------------------------#

MAKEFLAGS		+= --silent --no-print-directory

#---------------------------#
#          RECIPES          #
#---------------------------#

all: $(MANDATORY_NAME)

bonus: $(BONUS_NAME)

$(MANDATORY_NAME): $(LIBFT) $(MINILIBX) $(MANDATORY_OBJS)
	$(CC) $(CFLAGS) $(MANDATORY_OBJS) $(LDFLAGS) -o $(MANDATORY_NAME)
	$(info CREATED $(MANDATORY_NAME))

$(BONUS_NAME): $(LIBFT) $(MINILIBX) $(BONUS_OBJS)
	$(CC) $(CFLAGS) $(BONUS_OBJS) $(LDFLAGS) -o $(BONUS_NAME)
	$(info CREATED $(BONUS_NAME))

$(LIBFT):
	$(MAKE) -C libft

$(MINILIBX):
	$(MAKE) -C minilibx

.build/%.o: %.c
	mkdir -p $(@D)
	$(CC) $(CFLAGS) -c $(CPPFLAGS) $< -o $@
	$(info CREATED $@)

-include $(DEPS)

clean:
	$(MAKE) -C libft clean
	$(MAKE) -C minilibx clean
	rm -rf .build

fclean: clean
	$(MAKE) -C libft fclean
	$(MAKE) -C minilibx clean
	rm -rf $(MANDATORY_NAME)
	rm -rf $(BONUS_NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

#------------------------#
#          SPEC          #
#------------------------#

.PHONY: all clean fclean re
.DELETE_ON_ERROR:

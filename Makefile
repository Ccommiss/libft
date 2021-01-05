# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ccommiss <ccommiss@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/16 15:08:11 by ccommiss          #+#    #+#              #
#    Updated: 2020/12/30 14:59:59 by ccommiss         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

SRCS = ft_isalnum.c \
	ft_isprint.c \
	ft_memcmp.c \
	ft_putchar_fd.c \
	ft_split.c \
	ft_strlcat.c \
	ft_strncmp.c \
	ft_substr.c \
	ft_atoi.c \
	ft_isalpha.c \
	ft_itoa.c \
	ft_memcpy.c \
	ft_putendl_fd.c \
	ft_strchr.c  \
	ft_strlcpy.c \
	ft_strnstr.c \
	ft_tolower.c\
	ft_bzero.c \
	ft_isascii.c \
	ft_memccpy.c \
	ft_memmove.c \
	ft_putnbr_fd.c \
	ft_strdup.c \
	ft_strlen.c \
	ft_strrchr.c \
	ft_toupper.c \
	ft_calloc.c \
	ft_isdigit.c \
	ft_memchr.c \
	ft_memset.c  \
	ft_putstr_fd.c \
	ft_strjoin.c \
	ft_strmapi.c \
	ft_strtrim.c

CUSTOM = ft_putstr.c \
	ft_putnbr.c \
	ft_putchar.c \
	ft_swap_strings.c \
	ft_swap_char.c \
	ft_reverse.c \
	ft_strncat.c \
	ft_memdel.c \
	ft_strncpy.c \
	ft_strequ.c \
	ft_itoa_base.c \
	ft_strtoupper.c \
	ft_utoa.c

BONUS = ft_lstnew.c \
	ft_lstadd_front.c \
	ft_lstsize.c \
	ft_lstlast.c \
	ft_lstadd_back.c \
	ft_lstdelone.c \
	ft_lstclear.c \
	ft_lstiter.c \
	ft_lstmap.c \

FLAGS = -Wall -Werror -Wextra
OBJS = $(SRCS:.c=.o) $(CUSTOM:.c=.o) $(BONUS:.c=.o)
OBJS_BONUS = $(BONUS:.c=.o)
NORME = norminette
CC = @clang -c -g $(FLAGS)

all : message $(NAME)
	@echo "Your $(NAME) is ready."

message :
	@echo "Your $(NAME) files are compiling..."

$(NAME): $(SRCS) $(OBJS)
	@ar -rc $(NAME) $(OBJS)
	@ranlib $(NAME)

bonus : all $(BONUS) $(OBJS_BONUS)
	@ar -rc $(NAME) $(OBJS_BONUS)
	@ranlib $(NAME)
	@echo "[ $(NAME) ] Your $(NAME) is ready, bonuses included."

norme:
	@$(NORME) $(SRCS) $(BONUS)

normebonus: norme
	@$(NORME) $(BONUS)

clean:
	@rm -f $(OBJS) $(OBJS_BONUS)
	@echo "[ $(NAME) ] Your .o files have been deleted."

fclean: clean
	@rm -f $(NAME)
	@echo "Your $(NAME) have been deleted."

re: fclean all

.PHONY: all clean re norme bonus normebonus

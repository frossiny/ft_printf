# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: frossiny <frossiny@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/07/16 11:23:33 by frossiny          #+#    #+#              #
#    Updated: 2019/02/08 18:36:45 by frossiny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC		=	gcc
CFLAGS	+=	-Wall -Werror -Wextra #-g -fsanitize=address

NAME 	=	libftprintf.a
SRCDIR	=	src
INCDIR	=	include
OBJDIR	=	objs
FILES 	=	ft_printf.c					\
			arg_parser.c				\
			size_parser.c				\
			arg_filler.c				\
			converter.c					\
			utils.c						\
			utils2.c					\
			float_utils.c				\
			converters/char.c			\
			converters/ftoa.c			\
			converters/integer.c		\
			converters/pointer.c		\
			converters/itoa_signed.c	\
			converters/itoa_unsigned.c	\
			converters/unknown.c		\
			ft_memset.c					\
			ft_memalloc.c				\
			ft_memdel.c					\
			ft_memcpy.c					\
			ft_memccpy.c				\
			ft_memchr.c					\
			ft_memmove.c				\
			ft_memcmp.c					\
			ft_bzero.c					\
			ft_strlen.c					\
			ft_strdup.c					\
			ft_strcpy.c					\
			ft_strncpy.c				\
			ft_strlcpy.c				\
			ft_strcat.c					\
			ft_strncat.c				\
			ft_strlcat.c				\
			ft_strchr.c					\
			ft_strrchr.c				\
			ft_strstr.c					\
			ft_strnstr.c				\
			ft_strcmp.c					\
			ft_strncmp.c				\
			ft_strrev.c					\
			ft_strnew.c					\
			ft_strdel.c					\
			ft_strddel.c				\
			ft_strclr.c					\
			ft_striter.c				\
			ft_striteri.c				\
			ft_strmap.c					\
			ft_strmapi.c				\
			ft_strequ.c					\
			ft_strnequ.c				\
			ft_strsub.c					\
			ft_strjoin.c				\
			ft_strnjoin.c				\
			ft_strtrim.c				\
			ft_strctrim.c				\
			ft_strsplit.c				\
			ft_atoi.c					\
			ft_itoa.c					\
			ft_islower.c				\
			ft_isupper.c				\
			ft_isalpha.c				\
			ft_isdigit.c				\
			ft_isalnum.c				\
			ft_isascii.c				\
			ft_isprint.c				\
			ft_isspace.c				\
			ft_tolower.c				\
			ft_toupper.c				\
			ft_putchar.c				\
			ft_putstr.c					\
			ft_putnstr.c				\
			ft_putendl.c				\
			ft_putnbr.c					\
			ft_putchar_fd.c				\
			ft_putstr_fd.c				\
			ft_putnstr_fd.c				\
			ft_putendl_fd.c				\
			ft_putnbr_fd.c				\
			ft_lstnew.c					\
			ft_lstdelone.c				\
			ft_lstadd.c					\
			ft_lstdel.c					\
			ft_lstdelstr.c				\
			ft_lstiter.c				\
			ft_lstmap.c					\
			ft_lstfold.c
SRCS	=	$(addprefix $(SRCDIR)/, $(FILES))
OBJS	=	$(SRCS:$(SRCDIR)/%.c=$(OBJDIR)/%.o)

##### Colors #####
_END=\x1b[0m
_BOLD=\x1b[1m
_UNDER=\x1b[4m
_REV=\x1b[7m
_GREY=\x1b[30m
_RED=\x1b[31m
_GREEN=\x1b[32m
_YELLOW=\x1b[33m
_BLUE=\x1b[34m
_PURPLE=\x1b[35m
_CYAN=\x1b[36m
_WHITE=\x1b[37m

.PHONY: all clean fclean re

$(NAME): $(OBJS)
	@echo "${_BLUE}${_BOLD}[Linking] $(NAME)${_END}"
	@ar rc $(NAME) $(OBJS)
	@echo "${_GREEN}${_BOLD}$(NAME) done.${_END}"

$(OBJDIR)/%.o: $(SRCDIR)/%.c
	@[ -d $(OBJDIR) ] || mkdir -p $(OBJDIR)
	@[ -d $(OBJDIR)/converters ] || mkdir -p $(OBJDIR)/converters
	@echo "${_PURPLE}Compiling $<${_END}"
	@$(CC) $(CFLAGS) -I $(INCDIR) -o $@ -c $<

all: $(NAME)

clean:
	@echo "${_RED}${_BOLD}Removing obj files...${_END}"
	@rm -f $(OBJS)

fclean: clean
	@echo "${_RED}${_BOLD}Removing $(NAME)...${_END}"
	@rm -f $(NAME)

re: fclean $(NAME)

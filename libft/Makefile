# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: mashley <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/09/09 12:09:43 by mashley           #+#    #+#              #
#    Updated: 2019/10/02 17:06:42 by mashley          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
SOURCES = ./
INCLUDES = -L $(addprefix ./includes/, $(HEAD))
CC = gcc -Wall -Wextra -Werror
RM = /bin/rm -rf

HEAD := libft.h get_next_line.h bonus.h tmp.h
ARR := ft_range.c ft_free_array.c ft_free_matrix.c
CHR := ft_tolower.c ft_toupper.c
FUN := ft_striter.c ft_striteri.c ft_strmap.c ft_strmapi.c
GNL := ft_wdcounter.c get_next_line.c
IS  := ft_isalnum.c ft_isalpha.c ft_isascii.c ft_ischar.c ft_isdigit.c ft_ishex.c ft_ishexlow.c ft_ishexnumber.c ft_ishexup.c ft_islower.c ft_ismark.c ft_isnumber.c ft_ispoint.c ft_isprint.c ft_issign.c ft_isspace.c ft_isupper.c
LOC := ft_memalloc.c ft_realloc.c ft_strdel.c ft_strdup.c ft_strjoin.c ft_strjoinfree.c ft_strnew.c ft_strsub.c
LST := ft_lstadd.c ft_lstdel.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c ft_lstnew.c
MEM := ft_bzero.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memdel.c ft_memmove.c ft_memrcpy.c ft_memset.c
NUM := ft_abs_f.c ft_abs.c ft_atoi_base.c ft_atoi.c ft_atoll.c ft_intlen.c ft_itoa.c
PUT := ft_putchar.c ft_putchar_fd.c ft_putendl.c ft_putendl_fd.c ft_putnbr.c ft_putnbr_fd.c ft_putstr.c ft_putstr_fd.c
STR := ft_strcat.c ft_strchr.c ft_strclr.c ft_strcmp.c ft_strcount.c ft_strcpy.c ft_strequ.c ft_strlcat.c ft_strlen.c ft_strncat.c ft_strncmp.c ft_strncpy.c ft_strnequ.c ft_strnlen.c ft_strnstr.c ft_strplen.c ft_strrchr.c
TXT := ft_open_read.c ft_strsplit.c ft_strstr.c ft_strtrim.c
BONUS = ft_shrinking_gap.c
TMP = ft_main.c
SRCS := ARR CHR FUN GNL IS LOC LST MEM NUM PUT STR TXT BONUS

CFILES := $(addprefix ./srcs/, \
			$(addprefix arr/, $(ARR)) \
			$(addprefix chr/, $(CHR)) \
			$(addprefix fun/, $(FUN)) \
			$(addprefix gnl/, $(GNL)) \
			$(addprefix is/, $(IS)) \
			$(addprefix loc/, $(LOC)) \
			$(addprefix lst/, $(LST)) \
			$(addprefix mem/, $(MEM)) \
			$(addprefix num/, $(NUM)) \
			$(addprefix put/, $(PUT)) \
			$(addprefix str/, $(STR)) \
			$(addprefix txt/, $(TXT)) \
			$(addprefix bonus/, $(BONUS)) \
			$(TMP)\
			)

FILES = ./*/*.c

OFILES = $(patsubst %.c, %.o, $(CFILES))

.PHONY: all $(NAME) clean fclean re

.SILENT: $(OFILES)

all : $(NAME)

$(NAME) : $(OFILES)
	@ar rc $(NAME) $(OFILES)
	ranlib $(NAME)

%.o : %.c $(HEAD)
	@$(CC) -c $< -o $@ $(INCLUDES)

clean :
	@$(RM) $(OFILES)

fclean : clean
	$(RM) $(NAME)

re : fclean all
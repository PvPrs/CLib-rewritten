#******************************************************************************#
#                                                                              #
#                                                         ::::::::             #
#    makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: dvan-boc <marvin@codam.nl>                   +#+                      #
#                                                    +#+                       #
#    Created: 2019/01/24 14:00:38 by dvan-boc      #+#    #+#                  #
#    Updated: 2019/01/24 14:01:18 by dvan-boc      ########   odam.nl          #
#                                                                              #
#******************************************************************************#

NAME = libft.a

HEADER = includes/ \
		 io/get_next_line.h \

SRC = string/ft_revstr.c \
	list/ft_lstiter.c \
	list/ft_lstdel.c \
	string/ft_strsub.c \
	list/ft_lstdelone.c \
	string/ft_strtolower.c \
	list/ft_lstnew.c \
	string/ft_strtoupper.c \
	string/ft_striter.c \
	fd/ft_putnbr_fd.c \
	fd/ft_putchar_fd.c \
	fd/ft_putendl_fd.c \
	string/ft_strcpy.c \
	string/ft_strcat.c \
	string/ft_strmapi.c \
	string/ft_strdup.c \
	string/ft_strjoin.c \
	string/ft_strcmp.c \
	mem/ft_memset.c \
	mem/ft_memccpy.c \
	mem/ft_memalloc.c \
	utils/ft_itoa.c \
	utils/ft_isdigit.c \
	utils/ft_isprime.c \
	string/ft_strlen.c \
	string/ft_bzero.c \
	string/ft_strdel.c \
	mem/ft_memmove.c \
	mem/ft_memdel.c \
	string/ft_strncmp.c \
	utils/ft_int_to_binary.c \
	print/ft_putnbr.c \
	mem/ft_memcpy.c \
	mem/ft_memchr.c \
	utils/ft_isalnum.c \
	mem/ft_memcmp.c \
	utils/ft_tolower.c \
	string/ft_strstr.c \
	string/ft_strclr.c \
	string/ft_strnew.c \
	list/ft_lstadd.c \
	print/ft_putstr.c \
	string/ft_strequ.c \
	string/ft_strmap.c \
	string/ft_strlcat.c \
	print/ft_putchar.c \
	string/ft_strsplit.c \
	string/ft_striteri.c \
	utils/ft_atoi.c \
	utils/ft_isascii.c \
	utils/ft_isprint.c \
	string/ft_strchr.c \
	string/ft_strrchr.c \
	utils/ft_toupper.c \
	utils/ft_isalpha.c \
	fd/ft_putstr_fd.c \
	string/ft_strncat.c \
	string/ft_strncpy.c \
	print/ft_putendl.c \
	string/ft_strnequ.c \
	io/get_next_line.c \
	string/ft_strnstr.c \
	list/ft_lstmap.c \
	utils/ft_bit_to_max_int.c \
	utils/ft_sqrt.c \
	string/ft_strtrim.c \

OBJ = ft_striter.o \
	ft_memset.o \
	ft_strequ.o \
	ft_isalnum.o \
	ft_strcat.o \
	ft_strdup.o \
	ft_strcpy.o \
	ft_putnbr.o \
	ft_putnbr_fd.o \
	ft_atoi.o \
	ft_strstr.o \
	ft_putendl.o \
	ft_lstadd.o \
	ft_strnstr.o \
	ft_isdigit.o \
	ft_tolower.o \
	ft_strncmp.o \
	ft_isprint.o \
	ft_strcmp.o \
	ft_isalpha.o \
	ft_strnequ.o \
	ft_strdel.o \
	ft_putchar.o \
	ft_memdel.o \
	ft_strlcat.o \
	ft_strchr.o \
	ft_memchr.o \
	ft_itoa.o \
	ft_strsub.o \
	ft_strmap.o \
	ft_isascii.o \
	ft_strnew.o \
	ft_bzero.o \
	ft_lstmap.o \
	ft_putchar_fd.o \
	ft_strncpy.o \
	ft_strncat.o \
	ft_memmove.o \
	ft_strrchr.o \
	ft_strlen.o \
	ft_strjoin.o \
	ft_memcmp.o \
	ft_memcpy.o \
	ft_putstr_fd.o \
	ft_striteri.o \
	ft_memalloc.o \
	ft_strclr.o \
	ft_putstr.o \
	ft_lstiter.o \
	ft_lstnew.o \
	ft_strtrim.o \
	ft_lstdel.o \
	ft_strsplit.o \
	ft_strmapi.o \
	ft_memccpy.o \
	ft_toupper.o \
	ft_lstdelone.o \
	ft_putendl_fd.o \
	ft_strtolower.o \
	ft_strtoupper.o \
	ft_isprime.o \
	ft_sqrt.o \
	ft_revstr.o \
	ft_bit_to_max_int.o \
	ft_int_to_binary.o \
	get_next_line.o \

all: $(NAME)

$(NAME):
	gcc -Wall -Werror -Wextra -I $(HEADER) -c $(SRC)
	ar rc $(NAME) $(OBJ)

clean:
	rm -f *.o \

fclean: clean
	rm -f $(NAME)
	rm -f *~
	find . -name \*.gch -type f -delete

re: fclean all
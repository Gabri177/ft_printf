NAME = libftprintf.a
CFILE = asistant_print.c count_arg.c dec_to_hex.c ft_printf.c ft_putinbr_fd.c is_c_legal.c
LOFILE =ft_atoi.o ft_bzero.o ft_calloc.o ft_isalnum.o ft_isalpha.o \
		ft_isascii.o ft_isdigit.o ft_isprint.o ft_itoa.o ft_memchr.o ft_memcmp.o \
		ft_memcpy.o ft_memmove.o ft_memset.o ft_putchar_fd.o ft_putendl_fd.o \
		ft_putnbr_fd.o ft_putstr_fd.o ft_split.o ft_strchr.o ft_strdup.o ft_striteri.o \
		ft_strjoin.o ft_strlcat.o ft_strlcpy.o ft_strlen.o ft_strmapi.o \
		ft_strncmp.o ft_strnstr.o ft_strrchr.o ft_strtrim.o ft_substr.o \
		ft_tolower.o ft_toupper.o
DIRLCFILE = $(addprefix ./Libft/,$(LOFILE))
OFILE = $(CFILE:%.c=%.o)
HFILE = ./
FLAG = -Wall -Werror -Wextra


all: prepare maintarget
maintarget: $(NAME)
$(NAME): $(OFILE)
	ar rc $@ $^ $(DIRLCFILE)
%.o : %.c
	gcc -c $(FLAG) $< -I $(HFILE) -o $@
clean:
	rm -rf $(OFILE)
fclean: clean
	rm -rf $(NAME)
re: fclean all
prepare: 
	$(MAKE) -C Libft
.PHONY :clean re fclean
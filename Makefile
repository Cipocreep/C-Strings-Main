all: build-C-pointers

build-C-pointers:	main.c ../ex0/ft_str_is_alpha.c ../ex1/ft_str_is_numeric.c ../ex2/ft_str_is_lowercase.c ../ex3/ft_str_is_uppercase.c ../ex4/ft_str_is_printable.c ../ex5/ft_strupcase.c ../ex6/ft_strlowcase.c ../ex7/ft_strcapitalize.c ../ex8/ft_strlen.c ../ex9/ft_putstr.c ../ex10/ft_putstr_non_printable.c
	cc -Werror -Wall -Wextra $^ -o Tests-C-pointers

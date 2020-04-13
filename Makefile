##
## EPITECH PROJECT, 2019
## makefile
## File description:
## make files
##

FSRC	:=	src/

SRC	:=	$(FSRC)main.c	\
		$(FSRC)parse_file_0.c	\
		$(FSRC)parse_file_1.c	\
		$(FSRC)process.c	\
		$(FSRC)process/init.c	\
		$(FSRC)utils_0.c	\

NAME	:=	lem_in

OBJ	:=	$(SRC:.c=.o)

_MAKEFILES	:=	my	\
				_maths	\
				_stat	\
				_string	\

LIBS	:=	$(addprefix -l, $(_MAKEFILES))

LDFLAGS +=	-Iinclude/ -L./lib $(LIBS)


CFLAGS	+=	-Wall

COLOR	:=	\033[01;38;5;31m

WHITE	:=	\033[0;0m

CLEAR	:=	\033[2K

all:	$(NAME)

$(NAME):	$(OBJ)	make_all
	@$(CC)  -g $(OBJ) -o $(NAME) $(LDFLAGS)
	@echo -e "$(CLEAR)$(NAME) : $(COLOR)OK$(WHITE)"

%.o:	%.c
	@$(CC) -g -o $@ -c $< $(CFLAGS) $(LDFLAGS)
	@echo -ne "$(CLEAR)Compiled $< : $(COLOR)OK$(WHITE)\r"

clean:	make_clean
	@find ./$(FSRC) -name "*.o" -delete
	@rm -f vgcore*
	@echo -e "'.o' Deletion : \033[01;38;5;220mDONE$(WHITE)"

fclean: clean	make_fclean
	@rm -f $(NAME)
	@echo -e "'$(NAME)' deletion : \033[01;38;5;222mDONE$(WHITE)"

re:	fclean	all

de:	make_all
	@$(CC) $(OBJ) -o $(NAME) $(LDFLAGS) -g
	@echo "Valgrind Output :"
	@valgrind ./$(NAME)

go:	all
	@./$(NAME)

make_all:
	@for makefile in $(_MAKEFILES); do	\
	$(MAKE) --no-print-directory -C lib/$$makefile;	\
	done

make_clean:
	@for makefile in $(_MAKEFILES); do	\
	$(MAKE) --no-print-directory -C lib/$$makefile clean;	\
	done

make_fclean:
	@for makefile in $(_MAKEFILES); do	\
	$(MAKE) --no-print-directory -C lib/$$makefile fclean;	\
	done

.PHONY:	$(NAME) clean fclean re go de

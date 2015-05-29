##
## Makefile for Makefile in /home/mathon_j/rendu/208chevillettes
## 
## Made by Jérémy MATHON
## Login   <mathon_j@epitech.net>
## 
## Started on  Thu May 28 15:44:41 2015 Jérémy MATHON
## Last update Fri May 29 18:19:55 2015 Jérémy MATHON
##

NAME			=	208chevillettes

SRC			=	main.cpp		\
				208chevillettes.cpp	\
				verif.cpp		\
				donnees.cpp

OBJ			=	$(SRC:.cpp=.o)

RM			=	rm -rf

CXX			=	clang++

CXXFLAGS		=	-W -Wall -Wextra -g

all			:	$(NAME)

$(NAME)			:	$(OBJ)
				$(CXX) -o $(NAME) $(OBJ) -L/gmp_install/lib -lgmp

clean			:
				$(RM) $(OBJ)

fclean			:	clean
				$(RM) $(NAME)

re			:	fclean all

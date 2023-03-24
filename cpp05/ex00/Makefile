NAME = ft_Bureaucrat

SOURCES =		srcs/main.cpp \
				srcs/Bureaucrat.cpp
				

HEADER =	includes/Bureaucrat.hpp

OBJS = ${SOURCES:.cpp=.o}

CFLAGS = -Wall -Wextra -Werror -std=c++98 -g3
SANITIZE = #-fsanitize=address
CC = c++ $(SANITIZE)


all :
	${MAKE} -C ./ norm

norm : $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) $(CFLAGS) -o $(NAME)

%.o: %.cpp ${INCLUDES} Makefile $(HEADER)
	${CC} ${CFLAGS} -c $< -o $@;

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re:	fclean
	${MAKE} -C ./ norm

#COLORS
RED = \033[1;31m
GREEN = \033[1;32m
YELLOW = \033[1;33m
CYAN = \033[1;36m
RST = \033[0m
PURPLE = \033[5;35m
N_PURPLE = \033[1;35m

.PHONY: all clean fclean re

NAME = Animal
CC = clang++
CFLAGS = -Wall -Werror -Wextra
SRCS = Animal.cpp \
		Cat.cpp \
		Dog.cpp \
		WrongAnimal.cpp \
		WrongCat.cpp \
		main.cpp
OBJS = $(SRCS:%.cpp=%.o)

all: $(NAME)
$(NAME): $(OBJS)
		@$(CC) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
		$(RM) $(OBJS)
fclean:	clean
		$(RM) $(NAME)
re:	fclean all
NAME = HI_THIS_IS_BRAIN
CPP = clang++ 
CPPFLAGS = -Wall -Werror -Wextra
MAIN = main.cpp

all: $(NAME)

$(NAME): $(MAIN)
	$(CPP) $(CPPFLAGS) $(MAIN) -o $(NAME)
clean:
	rm -rf $(NAME)

re:
	clean all
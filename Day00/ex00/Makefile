NAME = megaphone
CPP = clang++

CPPFLAGS = -Wall -Werror -Wextra

MAIN=megaphone.cpp
all: $(NAME)

$(NAME): $(MAIN)
	$(CPP) megaphone.cpp $(CPPFLAGS) -o megaphone
clean:
	rm -rf megaphone
re: clean all

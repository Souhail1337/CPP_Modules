NAME = Phonebook
CPP = clang++

CPPFLAGS = -Wall -Wextra -Werror

SRC = phone.cpp contact.cpp 
all: $(NAME)

$(NAME): $(SRC)
	$(CPP) $(SRC) $(CPPFLAGS) -o Phonebook
clean:
	rm -rf Phonebook
re: clean all
CC := clang++

CFLAGS := -Wall -Wextra -Werror

NAME := phonebook

SRCS := main.cpp \
		utils.cpp \
		Contact.cpp \
		PhoneBook.cpp

OBJ_DIR := obj

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

INC := Contact.hpp PhoneBook.hpp

##############################
all : $(NAME)

##############################

# Creating target
#
$(NAME) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

##############################

# Compilation
#
$(OBJ_DIR)/%.o : %.cpp $(INC) | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

# Creation dir for objs
#
$(OBJ_DIR) :
	mkdir -p ./obj

##############################

# Mandatory rules
#
clean :
	$(RM) $(OBJS)

fclean : clean
	$(RM) $(NAME)

re : fclean all

##############################

# Eternal rules !
#
.PHONY : clean fclean re

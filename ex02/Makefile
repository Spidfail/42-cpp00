CC := clang++

CFLAGS := -Wall -Wextra -Werror -std=c++98

NAME := account

TEST:= tests.cpp

SRCS := Account.cpp

OBJ_DIR := obj

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

INC := Account.hpp

##############################
all : $(NAME)

##############################

# Creating target
#
$(NAME) : $(OBJS)
	$(CC) $(TEST) $(CFLAGS) $^ -o $@

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

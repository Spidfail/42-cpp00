CC := clang++

CFLAGS := -Wall -Wextra -Werror -std=c++98

NAME := megaphone

SRCS := megaphone.cpp

OBJ_DIR := obj

OBJS := $(addprefix $(OBJ_DIR)/, $(SRCS:%.cpp=%.o))

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
$(OBJ_DIR)/%.o : %.cpp | $(OBJ_DIR)
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

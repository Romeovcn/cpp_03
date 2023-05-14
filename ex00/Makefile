SRCS_DIR = srcs

OBJS_DIR = objs

SRCS := $(shell find srcs/*.cpp -exec basename \ {} \;)

OBJS = $(patsubst %.cpp,$(OBJS_DIR)/%.o,$(SRCS))

INCLUDES = $(shell find includes/*.hpp)

NAME = a.out

CC = c++

CFLAGS = -Werror -Wall -Wextra -std=c++98

# ------------------- RULES ------------------- #

$(NAME): $(OBJS_DIR) $(OBJS) $(INCLUDES)
	@$(CC) $(CFLAGS) $(OBJS) -I./includes -o $(NAME)
	@echo "\033[32m$ $(NAME) compiled !"
	@echo "----------------------------\033[0m"

all: $(NAME)

$(OBJS_DIR):
	@mkdir -p $(OBJS_DIR)
	@echo "\033[33mcompiling $(NAME)..."

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.cpp
	@$(CC) $(CFLAGS) -I./includes -c $< -o $@

clean:
	@rm -rf $(OBJS_DIR)
	@echo "\033[32mclean !\033[0m"

fclean: clean
	@rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
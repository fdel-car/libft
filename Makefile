TARGET := libft.a
SRCS_DIR := ./srcs
OBJS_DIR := ./objs
CC := clang
CFLAGS := -Wall -Wextra -Werror
ignore-warnings : CFLAGS := -w

# Colors
RESET := \033[0m
GREEN := \033[32;01m
ERROR := \033[31;01m
WARN := \033[33;01m
# Formatting
CLEAR_LINE := \033[2K
MOVE_CURSOR_UP := \033[1A

SRCS := $(shell find $(SRCS_DIR) -name *.c)
OBJS := $(patsubst $(SRCS_DIR)%.c,$(OBJS_DIR)%.o,$(SRCS))

all: $(OBJS_DIR) $(TARGET)

ignore-warnings: all

$(OBJS_DIR):
	@mkdir -p ./objs

$(TARGET): $(OBJS)
	@ar rc $@ $(OBJS)
	@ranlib $@
	@echo "\n$(GREEN)Successfully compiled libft.a.$(RESET)"

$(OBJS_DIR)/%.o: $(SRCS_DIR)/%.c
	@echo "$(CLEAR_LINE)Creating object of the libft with $^...$(MOVE_CURSOR_UP)"
	@$(CC) $(CFLAGS) -c $^ -o $@ -I./includes

clean:
	@rm -rf objs/

fclean: clean
	@rm -f $(TARGET)

re: fclean
	@make all

.PHONY: all clean fclean re ignore-warnings
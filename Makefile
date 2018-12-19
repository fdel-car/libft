NAME = libft.a

SRCS := $(shell echo srcs/*.c)

OBJS := $(SRCS:.c=.o)

CFLAGS := -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJS)
	@echo "\n\033[2K\033[1;32mCompiling libft.a...\033[0;39m"
	@mkdir -p objs/ && mv *.o objs/
	@ar rc $@ $(patsubst srcs%, objs%, $(OBJS))
	@ranlib $@

%.o: %.c
	@echo "\033[2K\033[1;33mCreating object of the libft with $^...\033[0;39m\033[1A"
	@gcc $(CFLAGS) -c $^ -I./includes

clean:
	@rm -rf objs/

fclean: clean
	@rm -rf $(NAME)

re: fclean
	@make all
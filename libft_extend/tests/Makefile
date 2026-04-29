# ========== Compilation Variables ==========
CC = cc
CFLAGS = -Wall -Wextra -Werror
LIBFT_DIR = ../
LIBFT_A = $(LIBFT_DIR)libft.a

# ========== Directories ==========
TEST_DIR = .
BIN_DIR = bin

# ========== Source Files ==========
TEST_SRC = test_libft_extend.c
TEST_OBJ = $(TEST_SRC:.c=.o)
TEST_BIN = $(BIN_DIR)/test_libft_extend

# ========== Targets ==========
all: $(TEST_BIN)

$(BIN_DIR):
	mkdir -p $(BIN_DIR)

$(TEST_BIN): $(TEST_OBJ) $(LIBFT_A) | $(BIN_DIR)
	$(CC) $(CFLAGS) -o $@ $(TEST_OBJ) $(LIBFT_A)

%.o: %.c
	$(CC) $(CFLAGS) -I$(LIBFT_DIR) -c $< -o $@

run: $(TEST_BIN)
	./$(TEST_BIN)

clean:
	rm -f $(TEST_OBJ)

fclean: clean
	rm -rf $(BIN_DIR)

re: fclean all

.PHONY: all run clean fclean re

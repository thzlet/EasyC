# Compiler
CC = gcc

# Compiler flags: include the header folder and enable all warnings
CFLAGS = -Iinclude -Wall -g

# Source files
SRC = src/utils.c src/dynamic_mem.c src/list.c src/stack.c src/queue.c src/binary_tree.c src/file_io.c

# Targets
EXAMPLE = main
TEST = test

# ------------------------
# Default target: compile example
# ------------------------
all: $(EXAMPLE)

# Compile the main example
$(EXAMPLE): $(SRC) examples/main.c
	$(CC) $(CFLAGS) $(SRC) examples/main.c -o $(EXAMPLE)

# Compile the test file
$(TEST): $(SRC) tests/test.c
	$(CC) $(CFLAGS) $(SRC) tests/test.c -o $(TEST)

# Clean compiled files
clean:
	rm -f $(EXAMPLE) $(TEST)
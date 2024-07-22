# Compiler to use
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra -pedantic

# Target executable
TARGET = test

# Rule to compile the target
$(TARGET): test.c
	$(CC) $(CFLAGS) -o $(TARGET) test.c

# Clean up the generated files
.PHONY: clean
clean:
	rm -f $(TARGET)

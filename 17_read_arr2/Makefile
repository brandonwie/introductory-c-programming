# Compiler
CC = gcc

# Compiler flags
CFLAGS = -Wall -Wextra

# Target executable
TARGET = test

# Build rule
$(TARGET): test.c
	$(CC) $(CFLAGS) -o $(TARGET) test.c

# Clean rule to remove generated files
clean:
	rm -f $(TARGET) answer.txt

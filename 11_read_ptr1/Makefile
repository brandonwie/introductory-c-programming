
CC = gcc
GFLAGS = -Wall -Wextra -pendatic
TARGET = test

$(TARGET): test.c
	$(CC) $(CFLAGS) -o $(TARGET) test.c

.PHONY: clean # clean up the generated files
clean:
	rm -f $(TARGET)

CC = gcc
CFLAGS = -Werror -Wextra -O2

SRC = hello.c
EXEC = vim

#--------------------------

all: $(EXEC)

$(EXEC): $(SRC)
	$(CC) $< -o $@ $(CFLAGS)

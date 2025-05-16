CC = gcc
CFLAGS = -Wall -Wextra -Iinclude -g
SRC = $(wildcard src/atm/*.c src/*.c)
OBJ = $(SRC:.c=.o)

all: atm

atm: $(OBJ)
	$(CC) $(CFLAGS) -o build/$@ $^

test:
	./tests/test_runner.sh

clean:
	rm -f src/*.o src/atm/*.o build/atm

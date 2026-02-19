CC=gcc
CFLAGS=-Wall -Wextra -g -Iinclude
TARGET=EAFITos
SRCS=$(wildcard src/core/*.c src/commands/*.c src/utils/*.c)

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

run: all
	./$(TARGET)

test: all
	bash tests/test_runner.sh

fix-perms:
	chmod +x tests/test_runner.sh scripts/*.sh

clean:
	rm -f $(TARGET)

.PHONY: all run test fix-perms clean

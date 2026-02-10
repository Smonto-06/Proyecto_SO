CC=gcc
CFLAGS=-Wall -Wextra -g
TARGET=EAFITos
SRCS=$(wildcard *.c)

all: $(TARGET)

$(TARGET): $(SRCS)
	$(CC) $(CFLAGS) $(SRCS) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)

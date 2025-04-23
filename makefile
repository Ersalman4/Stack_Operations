#make file for stack project

#compiler used for the project 
CC=gcc
#compiler flags and standard of c
CFLAGS = -Wall -Wextra -std=c99
#name of object files
OBJ = main.o stack.o 
#target file name
TARGET = stack_app

all:$(TARGET)

$(TARGET):$(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o:%.c
	$(CC) $(CFLAGS) -c $<

clean:
	rm -rf *.o $(TARGET)



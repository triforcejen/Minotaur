INCLUDE_DIRECTORY = ../include

CC = gcc
CFLAGS = -I$(INCLUDE_DIRECTORY)

OBJECTS_DIRECTORY = objects

_DEPENDENCIES = game_loop.h
DEPENDENCIES = $(patsubt %,$(INCLUDE_DIRECTORY)/%,$(_DEPENDENCIES))

_OBJECTS = main.o game_loop.o
OBJECTS = $(patsubst %,$(OBJECTS_DIRECTORY)/%,$(_OBJECTS))

$(OBJECTS_DIRECTORY)/%.o: %.c $(DEPENDENCIES)
	$(CC) -c -o $@ $< $(CFLAGS)

.PHONY: all
all:
	clear
	make clean
	make minotaur

.PHONY: clean
clean:
	rm -f $(OBJECTS_DIRECTORY)/*.o *~core $(INCLUDE_DIRECTORY)/*~


minotaur: $(OBJECTS)
	$(CC) -o $@ $^ $(CFLAGS)
	

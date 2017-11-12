IDIR =./inc
CC=gcc
CFLAGS=-g -I$(IDIR)
ODIR=obj

_DEPS = base.h game.h map.h server.h userInteraction.h userLogin.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = game.o map.o server.o userInteraction.o userLogin.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))


$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

server: $(OBJ)
	gcc -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f server $(ODIR)/*.o

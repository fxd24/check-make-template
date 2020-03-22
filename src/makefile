IDIR =../include
CC=gcc
CFLAGS= -O3 -I$(IDIR)

ODIR=obj
LDIR =../lib

LIBS=-lm

_DEPS = vec.h
DEPS = $(patsubst %,$(IDIR)/%,$(_DEPS))

_OBJ = main.o
OBJ = $(patsubst %,$(ODIR)/%,$(_OBJ))

TDIR = ../tests
TFLAGS = `pkg-config --cflags --libs check` 

$(ODIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

main: $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS) $(LIBS)


test: 
	$(CC) $(TDIR)/tests.c $(TFLAGS) -o $(ODIR)/$@
	./$(ODIR)/$@
	

.PHONY: clean

clean:
	rm -f $(ODIR)/*.o *~ core $(INCDIR)/*~ 

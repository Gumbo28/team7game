CFLAGS = -pthread
LFLAGS = -lrt -lX11 -lGLU -lGL -lm #-lXrandr

all: bship

bship: bship.o log.o avu2.cpp amartinez2.cpp adiazperez.cpp tbrown.cp abotello.cpp
	g++ bship.o log.o avu2.cpp amartinez2.cpp adiazperez.cpp tbrown.cpp abotello.cpp libggfonts.a $(LFLAGS) -o bship

bship.o: bship.cpp
	g++ -c bship.cpp

log.o: log.cpp
	g++ -c log.cpp

clean:
	rm -f bship
	rm -f *.o


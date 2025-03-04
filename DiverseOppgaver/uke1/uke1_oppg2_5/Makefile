program: program.o funksjon.o
	gcc program.o funksjon.o -o program

program.o: program.c shared.h
	gcc -c program.c -o program.o

funksjon.o: funksjon.c shared.h
	gcc -c funksjon.c -o funksjon.o

run: program.o
	./program

.PHONY: clean
clean:
	rm -f *.o program
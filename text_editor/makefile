justify : justify.o line.o word.h
	gcc -o justify justify.o word.o word.o
justify.o: justify.c line.h word.h
	gcc -c justify.c
word.o: word.c word.h
	gcc -c word.c
line.o: line.c line.h
	gcc -c line.c

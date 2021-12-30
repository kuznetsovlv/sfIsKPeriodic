#Makefile
objects = main.o

.PHONY: all
all: iskperiodic

iskperiodic: ${objects}
	gcc -o iskperiodic ${objects} -lstdc++

main.o:

.PHONY: clean
clean:
	-rm -f iskperiodic *.o 2>/dev/null

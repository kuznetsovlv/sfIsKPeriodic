#Makefile
objects = main.o isKPeriodic.o

.PHONY: all
all: iskperiodic

iskperiodic: ${objects}
	gcc -o iskperiodic ${objects} -lstdc++

main.o: isKPeriodic.h
isKPeriodic.o: isKPeriodic.h

.PHONY: clean
clean:
	-rm -f iskperiodic *.o 2>/dev/null

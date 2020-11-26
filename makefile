all: collatz dividers longest_shortest statistics alfabeticamente

collatz: collatz.o
	g++ -o collatz collatz.o
collatz.o: collatz.cc
	g++ -c collatz.cc

alfabeticamente: alfabeticamente.o
	g++ -o alfabeticamente alfabeticamente.o
alfabeticamente.o: alfabeticamente.cc
	g++ -c alfabeticamente.cc

dividers: dividers.o
	g++ -o dividers dividers.o
dividers.o: dividers.cc
	g++ -c dividers.cc

longest_shortest: longest_shortest.o
	g++ -o longest_shortest longest_shortest.o
longest_shortest.o: longest_shortest.cc
	g++ -c longest_shortest.cc

statistics: statistics.o
	g++ -o statistics statistics.o
statistics.o: statistics.cc
	g++ -c statistics.cc

clean:

	rm *.o

cleanall: 
	rm collatz dividers longest_shortest statistics alfabeticamente
	rm *.o
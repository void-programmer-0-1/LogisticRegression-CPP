compiler = g++


all: main.o matrix.o
	$(compiler) main.o matrix.o -o neuralnet

matrix.o: libs/matrix.cpp
	$(compiler) -c libs/matrix.cpp

run: neuralnet
	./neuralnet

clean:
	rm *.o neuralnet

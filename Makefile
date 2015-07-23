all: const.out

const.out: constCheck.o constCheckEXTRA.o
	g++ constCheck.o constCheckEXTRA.o -o const.out

constCheck.o: constCheck.cpp
	g++ -c constCheck.cpp -o constCheck.o

constCheckEXTRA.o: constCheckEXTRA.cpp
	g++ -c constCheckEXTRA.cpp -o constCheckEXTRA.o

clean:
	rm -rf constCheck.o constCheckEXTRA.o const.out

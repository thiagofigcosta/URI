FILE=

all: make run

make:
	@read -p "Digite o numero do programa:" FILE;\g++ $$FILE.cpp -std=c++11 -lm -o current

run: make
	./current

runin: make
	./current < in
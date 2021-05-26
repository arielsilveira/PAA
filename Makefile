

all:
	g++ $(List)/$(Question)/*.cpp -O2 && ./a.out < $(List)/$(Question)/in

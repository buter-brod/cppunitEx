all: project tests

project:
	g++ main.cpp problemSolver.cpp -o problemSolver

tests:
	g++ testProblemSolver.cpp -o tests

clean:
	rm -rf *.o tests problemSolver
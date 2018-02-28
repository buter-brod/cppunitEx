all: project

project:
	g++ main.cpp problemSolver.cpp -o problemSolver

clean:
	rm -rf *.o tests problemSolver
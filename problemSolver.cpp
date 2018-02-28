#include "problemSolver.h"

int ProblemSolver::sum(const int arg1, const int arg2) {
	
	return arg1 + arg2;

}
int ProblemSolver::divide(const int arg1, const int arg2) {
	
	if (arg2 == 0) {
		throw "Division by zero";
	} else {
		return arg1 / arg2;
	}
}
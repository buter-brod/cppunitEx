#include "problemSolver.h"
#include <iostream>
#include "3rdparty/cpptest/src/cpptest.h"

class PSSuite : public Test::Suite {
	void testSum();
	void testDivide();

public:
	PSSuite() {
		TEST_ADD(PSSuite::testSum);
		TEST_ADD(PSSuite::testDivide);
	}
};


int main() {

	std::cout << "Tests run: \n";

	PSSuite tests;
	Test::TextOutput output(Test::TextOutput::Verbose);
	return tests.run(output);
}
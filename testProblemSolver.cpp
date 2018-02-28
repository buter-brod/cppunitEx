#include "problemSolver.h"
#include <iostream>

#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>

class TestProblemSolver : public CppUnit::TestCase {
public:
	
	void checkSum() {
		CPPUNIT_ASSERT_MESSAGE("sum is not 30 :(", ProblemSolver::sum(10, 20) == 30);
	}
	
	void checkDivide() {
		CPPUNIT_ASSERT_MESSAGE("expected 3 :(", ProblemSolver::divide(16, 5) == 3);
	}
	
	void checkDivideFailure() {
		
		try {
			ProblemSolver::divide(100, 0);
		} catch(...) {
			return;
		}
		
		CPPUNIT_FAIL("ProblemSolver::divide did not throw division by zero");
	}
	
	CPPUNIT_TEST_SUITE(TestProblemSolver);
	CPPUNIT_TEST(checkSum);
	CPPUNIT_TEST(checkDivide);
	CPPUNIT_TEST(checkDivideFailure);
	CPPUNIT_TEST_SUITE_END();
};

CPPUNIT_TEST_SUITE_REGISTRATION(TestProblemSolver);

int main() {

	std::cout << "Tests run: \n";
	
	CppUnit::Test *test = CppUnit::TestFactoryRegistry::getRegistry().makeTest();
	CppUnit::TextTestRunner runner;
	runner.addTest(test);
	runner.run();
	return 0;
}

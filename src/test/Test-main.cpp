// Path to catch.hpp is part of the additioanl include files (see project properties : C/C++ - Général - Other Include Files)

// This file does not consume precompiled header (see properties : C/C++ - Precompiled Header - Do not use)
// See https://github.com/philsquared/Catch/blob/master/docs/slow-compiles.md
#define CATCH_CONFIG_RUNNER
#include "catch.hpp"


//using namespace std;

int main(int argc, char ** argv) {
	// If the LAST argument is "-p", then pause after the tests are run.
	bool pause_after_test = true;
	if (argc && std::string(argv[argc - 1]) == "-p") {
		pause_after_test = true;
		argc--;
	}

	int result = Catch::Session().run(argc, argv);

	if (pause_after_test) {
		std::cout << "Press ENTER to continue : ";
		std::cin.get();
	}
	return result;
}


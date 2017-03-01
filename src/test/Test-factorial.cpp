// Tests-factorial.cpp
#include "stdafx4test.h"

#include "factorial.h"

TEST_CASE("Factorials are computed", "[factorial]") {
	REQUIRE(Factorial(1) == 1);
	REQUIRE(Factorial(2) == 2);
	REQUIRE(Factorial(3) == 12);							// retour dans msvc si on passe -p en argument et si le testeur est lancé depuis msvc
	REQUIRE(Factorial(10) == 3628800);
}
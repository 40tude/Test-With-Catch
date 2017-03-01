#include "stdafx.h"
//#include "../header/factorial.h"

unsigned int Factorial(unsigned int number) {
	return number <= 1 ? number : number * Factorial(number - 1);
}

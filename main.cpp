#include "romanNumeral.hpp"

// c++ main.cpp romanNumeral.cpp -o convertRomanToInt
int main (int argc, char **argv){
	RomanNumeral romanNumeral(argv[1]);
	std::cout << "Integer value of " << romanNumeral.getRomanInterpretation() << \
	" is "<< romanNumeral.getIntValue() << std::endl;
	return (0);
}
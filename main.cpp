#include "romanNumeral.hpp"
using std::string;

/*
Function the returns integer when a string of a roman number is entered/

To compile enter command:

c++ main.cpp romanNumeral.cpp -o convertRomanToInt

in order to run:

./convertRomanToInt <ROMAN_NUMBER>

example:

./convertRomanToInt XXI
*/

int romanToInt(string roman)
{
	RomanNumeral romanNumeral(roman);
	romanNumeral.printValues();
	return (romanNumeral.getIntValue());
}

int main(int argc, char **argv)
{
	const char *cRoman = argv[1];
	string roman(cRoman);
	int result = romanToInt(roman);
	return (0);
}
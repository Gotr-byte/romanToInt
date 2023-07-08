#include "RomanNumber.hpp"
using std::string;

/*
Function the returns integer when a string of a roman number is entered/

To compile enter command:

c++ main.cpp RomanNumber.cpp -o convertRomanToInt

in order to run:

./convertRomanToInt <ROMAN_NUMBER>

example:

./convertRomanToInt XXI
*/

int romanToInt(string roman)
{
	RomanNumber RomanNumber(roman);
	RomanNumber.printValues();
	return (RomanNumber.getIntValue());
}

int main(int argc, char **argv)
{
	const char *cRoman = argv[1];
	string roman(cRoman);
	int result = romanToInt(roman);
	return (0);
}
#include "romanNumeral.hpp"

// c++ main.cpp romanNumeral.cpp -o convertRomanToInt

int romanToInt(std::string roman)
{
	char* cRoman = (char *)roman.c_str();
	RomanNumeral romanNumeral(cRoman);
	std::cout << "Integer value of " << romanNumeral.getRomanInterpretation() << \
	" is "<< romanNumeral.getIntValue() << std::endl;
	return (romanNumeral.getIntValue());
}

int main (int argc, char **argv){
	const char *cRoman = argv[1];
	std::string roman(cRoman);
	int result = romanToInt(roman);
	return (0);
}
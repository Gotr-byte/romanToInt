#pragma once
#include <map>
#include <iostream>

class RomanNumeral{
	public:
		// romanNumeral(std::string inputRomanNumeral);
		RomanNumeral(char *toTranslate);
		~RomanNumeral();

		int getIntValue();
		char *getRomanInterpretation();

	private:
		std::map <char, int> romanNumerals;
		int	integerValue;
		char *romanInterpretation;
};
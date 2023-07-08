#pragma once
#include <map>
#include <iostream>
#include <string>

class RomanNumeral
{
public:
	RomanNumeral(char *toTranslate);
	~RomanNumeral();

	int getIntValue();
	char *getRomanInterpretation();
	int calculateIntegerValue();

private:
	std::map<char, int> romanNumerals;
	int integerValue;
	char *romanInterpretation;
};
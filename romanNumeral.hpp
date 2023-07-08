#pragma once
#include <map>
#include <iostream>
#include <string>

using std::cout;
using std::map;
using std::string;

class RomanNumeral
{
public:
	RomanNumeral(string toTranslate);
	~RomanNumeral();

	void createNumerals();
	void calculateIntegerValue();
	int getIntValue();
	string getRomanInterpretation();
	void printValues();

private:
	map<char, int> romanNumerals;
	int integerValue;
	string romanInterpretation;
};
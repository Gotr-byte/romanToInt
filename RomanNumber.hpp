#pragma once
#include <map>
#include <iostream>
#include <string>

using std::cout;
using std::map;
using std::string;

class RomanNumber
{
public:
	RomanNumber(string toTranslate);
	~RomanNumber();

	void createNumerals();
	void calculateIntegerValue();
	int getIntValue();
	string getRomanInterpretation();
	void printValues();

private:
	map<char, int> RomanNumbers;
	int integerValue;
	string romanInterpretation;
};
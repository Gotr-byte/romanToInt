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

	void createDecodeMap();
	void calculateIntegerValue();
	int getIntValue();
	string getRomanValue();
	void printValues();
	bool nextIsLarger(int i );

private:
	map<char, int> romanNumbers;
	int integerValue;
	string romanValue;
};
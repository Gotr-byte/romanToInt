#include "RomanNumber.hpp"

RomanNumber::RomanNumber(string toTranslate) : romanValue(toTranslate), integerValue(0)
{
	createDecodeMap();
	calculateIntegerValue();
}

RomanNumber::~RomanNumber() {}

void RomanNumber::createDecodeMap()
{
	romanNumbers['I'] = 1;
	romanNumbers['V'] = 5;
	romanNumbers['X'] = 10;
	romanNumbers['L'] = 50;
	romanNumbers['C'] = 100;
	romanNumbers['D'] = 500;
	romanNumbers['M'] = 1000;
}

bool RomanNumber::nextIsLarger(int i )
{
	return (romanValue[i + 1] &&
			romanNumbers[romanValue[i]] <
				romanNumbers[romanValue[i + 1]]);
}

void RomanNumber::calculateIntegerValue()
{
	int i = 0;
	while (romanValue[i])
	{
		if(nextIsLarger(i))
		{
			integerValue = integerValue - romanNumbers[romanValue[i]];
		}
		else
		{
			integerValue = integerValue + romanNumbers[romanValue[i]];
		}
		i++;
	}
}

int RomanNumber::getIntValue()
{
	return (integerValue);
}

string RomanNumber::getromanValue()
{
	return (romanValue);
}

void RomanNumber::printValues()
{
	cout << "Integer value of " << getromanValue() << \
	" is "<< getIntValue() << "\n";
}
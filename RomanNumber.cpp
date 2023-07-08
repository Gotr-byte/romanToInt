#include "RomanNumber.hpp"

RomanNumber::RomanNumber(string toTranslate) : romanInterpretation(toTranslate), integerValue(0)
{
	createNumerals();
	calculateIntegerValue();
}

RomanNumber::~RomanNumber() {}

void RomanNumber::createNumerals()
{
	RomanNumbers['I'] = 1;
	RomanNumbers['V'] = 5;
	RomanNumbers['X'] = 10;
	RomanNumbers['L'] = 50;
	RomanNumbers['C'] = 100;
	RomanNumbers['D'] = 500;
	RomanNumbers['M'] = 1000;
}

void RomanNumber::calculateIntegerValue()
{
	int i = 0;
	while (romanInterpretation[i])
	{
		if (romanInterpretation[i + 1] &&
			RomanNumbers[romanInterpretation[i]] <
				RomanNumbers[romanInterpretation[i + 1]])
		{
			integerValue = integerValue - RomanNumbers[romanInterpretation[i]];
		}
		else
		{
			integerValue = integerValue + RomanNumbers[romanInterpretation[i]];
		}
		i++;
	}
}

int RomanNumber::getIntValue()
{
	return (integerValue);
}

string RomanNumber::getRomanInterpretation()
{
	return (romanInterpretation);
}

void RomanNumber::printValues()
{
	cout << "Integer value of " << getRomanInterpretation() << \
	" is "<< getIntValue() << "\n";
}
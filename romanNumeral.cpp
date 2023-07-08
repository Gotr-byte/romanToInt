#include "romanNumeral.hpp"

RomanNumeral::RomanNumeral(string toTranslate) : romanInterpretation(toTranslate), integerValue(0)
{
	createNumerals();
	calculateIntegerValue();
}

RomanNumeral::~RomanNumeral() {}

void RomanNumeral::createNumerals()
{
	romanNumerals['I'] = 1;
	romanNumerals['V'] = 5;
	romanNumerals['X'] = 10;
	romanNumerals['L'] = 50;
	romanNumerals['C'] = 100;
	romanNumerals['D'] = 500;
	romanNumerals['M'] = 1000;
}

void RomanNumeral::calculateIntegerValue()
{
	int i = 0;
	while (romanInterpretation[i])
	{
		if (romanInterpretation[i + 1] &&
			romanNumerals[romanInterpretation[i]] <
				romanNumerals[romanInterpretation[i + 1]])
		{
			integerValue = integerValue - romanNumerals[romanInterpretation[i]];
		}
		else
		{
			integerValue = integerValue + romanNumerals[romanInterpretation[i]];
		}
		i++;
	}
}

int RomanNumeral::getIntValue()
{
	return (integerValue);
}

string RomanNumeral::getRomanInterpretation()
{
	return (romanInterpretation);
}

void RomanNumeral::printValues()
{
	cout << "Integer value of " << getRomanInterpretation() << \
	" is "<< getIntValue() << "\n";
}
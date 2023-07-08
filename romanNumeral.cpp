#include "romanNumeral.hpp"
//c++ main.cpp romanNumeral.cpp -o convertRomanToInt

int RomanNumeral::calculateIntegerValue(){
	int i = 0;
	int integerValueTmp;
	while (romanInterpretation[i]){
		if(romanInterpretation[i + 1] && romanNumerals[romanInterpretation[i]] < \
		romanNumerals[romanInterpretation[i + 1]]){
			integerValueTmp = integerValueTmp - romanNumerals[romanInterpretation[i]];
		}
		else{
			integerValueTmp = integerValueTmp + romanNumerals[romanInterpretation[i]];
		}
		i++;
	}
	return integerValueTmp;
}

RomanNumeral::RomanNumeral(char *toTranslate){
	integerValue = 0;
	romanInterpretation = toTranslate;
	romanNumerals['I'] = 1;
	romanNumerals['V'] = 5;
	romanNumerals['X'] = 10;
	romanNumerals['L'] = 50;
	romanNumerals['C'] = 100;
	romanNumerals['D'] = 500;
	romanNumerals['M'] = 1000;
	integerValue = calculateIntegerValue();
	
}

RomanNumeral::~RomanNumeral(){}

int RomanNumeral::getIntValue(){
	return(this->integerValue);
}

char* RomanNumeral::getRomanInterpretation(){
	return(this->romanInterpretation);
}
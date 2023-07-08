#include "romanNumeral.hpp"
//c++ main.cpp romanNumeral.cpp -o convertRomanToInt

RomanNumeral::RomanNumeral(char *toTranslate){
	int i = 0;
	this->integerValue = 0;
	this->romanInterpretation = toTranslate;

	this->romanNumerals['I'] = 1;
	this->romanNumerals['V'] = 5;
	this->romanNumerals['X'] = 10;
	this->romanNumerals['L'] = 50;
	this->romanNumerals['C'] = 100;
	this->romanNumerals['D'] = 500;
	this->romanNumerals['M'] = 1000;

	while (toTranslate[i]){
		if(toTranslate[i + 1] && romanNumerals[toTranslate[i]] < \
		romanNumerals[toTranslate[i + 1]]){
			this->integerValue = this->integerValue - romanNumerals[toTranslate[i]];
		}
		else{
			this->integerValue = this->integerValue + romanNumerals[toTranslate[i]];
		}
		i++;
	}
}

RomanNumeral::~RomanNumeral(){}

int RomanNumeral::getIntValue(){
	return(this->integerValue);
}

char* RomanNumeral::getRomanInterpretation(){
	return(this->romanInterpretation);
}
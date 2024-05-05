#pragma once

#include <iostream>
#include <string>

#include "letter.h"

class Lexer
{
public:
	Lexer();
	bool input_is_valid(std::string input);
	bool is_letter_symbol(char letter);

private:
	Letter* buff;
};

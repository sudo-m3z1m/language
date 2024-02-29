#pragma once
#include <iostream>
#include <string>
#include "letter.h"

class Lexer
{
public:
	Lexer();
	Lexer(std::string start_input);
	void update_input(std::string new_input);
	bool input_is_valid();
	bool is_letter_symbol(char letter);

private:
	std::string input;
	Letter* buff;
};

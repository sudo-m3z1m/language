#include "lexer.h"

Lexer::Lexer()
{
	std::string start_input = "aaa";
	input = start_input;
}

Lexer::Lexer(std::string start_input)
{
	input = start_input;
}

void Lexer::update_input(std::string new_input)
{
	input = new_input;
}

bool Lexer::input_is_valid()
{
	buff = new Letter(input[0], 4);
	for (int input_index = 0; input_index < input.length(); input_index++)
	{
		if (input[input_index + 1] == '\0')
			return true;
		if (isdigit(input[input_index]) || isdigit(input[input_index + 1]))
			continue;
		if (is_letter_symbol(input[input_index]) || is_letter_symbol(input[input_index + 1]))
			continue;
		if (!buff->is_letter_accepted(input[input_index + 1]))
			return false;
		delete buff;
		buff = new Letter(input[input_index + 1], 4);
	}
	delete buff;
	return true;
}

bool Lexer::is_letter_symbol(char letter)
{
	char valid_symbols[9] = { '=', ':', '!', '(', ')', ';', ' ', '\t', '\n'};
	for (int symbol_index = 0; symbol_index < 9; symbol_index++)
	{
		if (letter == valid_symbols[symbol_index])
			return true;
	}
	return false;
}
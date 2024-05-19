#pragma once

#include <iostream>
#include <string>
#include <vector>

class Token
{
public:
	Token();
	Token(std::string word);
	~Token();
	void generate_accepted_tokens(std::string word);
	bool is_token_accepted(Token token);
	bool is_word_digit(std::string word);
	void print_token();

private:
	enum TokenType
	{
		DigidToken,
		PlusToken,
		MinusToken,
		EqualToken,
		DeclarationToken,
		ConstToken,
		VariableToken
	};

	TokenType type;
	std::vector<TokenType> accepted_tokens;
	int value;
};
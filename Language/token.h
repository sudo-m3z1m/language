#pragma once

#include <string>
#include <vector>

class Token
{
public:
	Token();
	Token(std::string word);
	~Token();
	void generate_accepted_tokens(std::string word);
	//bool is_token_accepted();

private:
	enum TokenType
	{
		DigidToken,
		PlusToken,
		MinusToken,
		EqualToken
	};

	TokenType type;
	std::vector<TokenType> accepted_tokens;
	int value;
};
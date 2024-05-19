#include "token.h"

Token::Token()
{
	value = 0;
	type = DigidToken;
	generate_accepted_tokens("0");
}

Token::Token(std::string word)
{
	generate_accepted_tokens(word);
}

Token::~Token()
{
	return;
}

void Token::generate_accepted_tokens(std::string word)
{
	if (word == "+")
	{
		type = PlusToken;
		value = 0;
		accepted_tokens.push_back(DigidToken);
		accepted_tokens.push_back(VariableToken);
		return;
	}
	if (word == "-")
	{
		type = MinusToken;
		value = 0;
		accepted_tokens.push_back(DigidToken);
		accepted_tokens.push_back(VariableToken);
		return;
	}
	if (word == "=")
	{
		type = EqualToken;
		value = 0;
		accepted_tokens.push_back(DigidToken);
		accepted_tokens.push_back(VariableToken);
		return;
	}
	if (isdigit(word[0])) //sheet crutch need to remade this
	{
		type = DigidToken;
		value = stoi(word);
		accepted_tokens.push_back(PlusToken);
		accepted_tokens.push_back(MinusToken);
		accepted_tokens.push_back(EqualToken);
		return;
	}
	if (word == "var")
	{
		type = DeclarationToken;
		value = 0;
		accepted_tokens.push_back(VariableToken);
		return;
	}
	if (word == "const")
	{
		type = ConstToken;
		value = 0;
		accepted_tokens.push_back(VariableToken);
		return;
	}
	else
	{
		type = VariableToken;
		value = 0;
		accepted_tokens.push_back(PlusToken);
		accepted_tokens.push_back(MinusToken);
		accepted_tokens.push_back(EqualToken);
	}
}

bool Token::is_token_accepted(Token token)
{
	for (int token_index = 0; token_index < accepted_tokens.size(); token_index++)
	{
		if (token.type == accepted_tokens[token_index])
			return true;
	}
	return false;
}
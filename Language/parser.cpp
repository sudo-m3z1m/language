#include "parser.h"

Parser::Parser()
{
	return;
}

Parser::~Parser()
{
	return;
}

bool Parser::tokenize(std::string token_word)
{
	Token new_token(token_word);
	
	if (tokens.empty())
	{
		tokens.push_back(new_token);
		return true;
	}
	if (!tokens.back().is_token_accepted(new_token))
	{
		return false;
	}
	tokens.push_back(new_token);
	return true;
}
#pragma once

#include "token.h"

class Parser
{
public:
	Parser();
	~Parser();
	bool tokenize(std::string token_word);

private:
	std::vector<Token> tokens;
};
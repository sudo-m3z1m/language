#pragma once

#include "token.h"

class Parser
{
public:
	Parser();
	~Parser();
	void tokenize();

private:
	std::vector<Token> tokens;
};
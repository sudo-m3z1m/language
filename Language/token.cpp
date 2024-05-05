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
	
}

void Token::generate_accepted_tokens(std::string word)
{
	if (strcmp(word.c_str(), "+"))
		return;
	if (strcmp(word.c_str(), "-"))
		return;
	if (strcmp(word.c_str(), "="))
		return;
}
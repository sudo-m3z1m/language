#pragma once

#include <vector>

class Letter
{
public:
	Letter();
	Letter(char letter, int max_letters);
	void generate_accepted_letters();
	bool is_letter_accepted(char letter);

private:
	char letter;
	std::vector<char> accepted_letters;
};
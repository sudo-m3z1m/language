#pragma once

class Letter
{
public:
	Letter();
	Letter(char letter, int max_letters);
	~Letter();
	void generate_accepted_letters();
	bool is_letter_accepted(char letter);

private:
	char letter;
	char* accepted_letters;
	int max_accepted_letters;
};
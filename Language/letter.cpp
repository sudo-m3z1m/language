#include "letter.h"

Letter::Letter()
{
	letter = 'a';
	generate_accepted_letters();
}

Letter::Letter(char letter, int max_letters)
{
	this->letter = letter;
	generate_accepted_letters();
}

void Letter::generate_accepted_letters()
{
	switch (letter)
	{
	case 'a':
		accepted_letters.push_back('r');
		accepted_letters.push_back('n');
		break;
	case 'r':
		accepted_letters.push_back('a');
		break;
	case 'v':
		accepted_letters.push_back('a');
		break;
	case 'f':
		accepted_letters.push_back('o');
		break;
	case 'o':
		accepted_letters.push_back('r');
		break;
	case 'e':
		accepted_letters.push_back('n');
		break;
	case 'n':
		accepted_letters.push_back('d');
		break;
	case 'd':
		accepted_letters.push_back('a');
		break;
	default:
		break;
	}
}

bool Letter::is_letter_accepted(char letter)
{
	for (int letter_index = 0; letter_index < accepted_letters.size(); letter_index++)
	{
		char accept_letter = accepted_letters[letter_index];
		if (letter == accept_letter)
			return true;
	}
	return false;
}
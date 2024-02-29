#include "letter.h"

Letter::Letter()
{
	letter = 'a';
	max_accepted_letters = 8;
	accepted_letters = new char[max_accepted_letters];

	generate_accepted_letters();
}

Letter::Letter(char letter, int max_letters)
{
	this->letter = letter;
	max_accepted_letters = max_letters;

	accepted_letters = new char[max_accepted_letters];
	generate_accepted_letters();
}

Letter::~Letter()
{
	delete[] accepted_letters;
}

void Letter::generate_accepted_letters()
{
	switch (letter)
	{
	case 'a':
		accepted_letters[0] = 'r';
		accepted_letters[1] = 'n';
		break;
	case 'r':
		accepted_letters[0] = 'a';
		break;
	case 'v':
		accepted_letters[0] = 'a';
		break;
	case 'f':
		accepted_letters[0] = 'o';
		break;
	case 'o':
		accepted_letters[0] = 'r';
		break;
	case 'e':
		accepted_letters[0] = 'n';
		break;
	case 'n':
		accepted_letters[0] = 'd';
		break;
	case 'd':
		accepted_letters[0] = 'a';
		break;
	default:
		break;
	}
}

bool Letter::is_letter_accepted(char letter)
{
	for (int letter_index = 0; letter_index < max_accepted_letters; letter_index++)
	{
		char accept_letter = accepted_letters[letter_index];
		if (letter == accept_letter)
			return true;
	}
	return false;
}
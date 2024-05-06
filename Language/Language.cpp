﻿#include "lexer.h"
#include "parser.h"

bool analyze_input(std::string input, Lexer lexer, Parser parser)
{
	std::string word;

	for (int letter_index = 0; letter_index < input.length(); letter_index++)
	{
		if (input[letter_index] == ' ')
		{
			if (!lexer.input_is_valid(word) || !parser.tokenize(word))
			{
				std::cout << "Compiling error in: " << word << std::endl;
				return false;
			}
			word = "";
			continue;
		}
		word = word + input[letter_index];
	}
	std::cout << "Success: " << input << std::endl;
	return true;
}

//void print_result(std::string error) //Need to make debug class 
//{
//
//}

int main()
{
    std::string input;
    std::string word;

    std::cout << "Enter string -> ";
    std::getline(std::cin, input);
    std::cout << std::endl;
    
<<<<<<< HEAD
    Lexer lexer(input);
    if (lexer.input_is_valid())
        std::cout << input << std::endl;
    else
        std::cout << "Compiling error" << std::endl;
=======
    Lexer lexer;
	Parser parser;
    analyze_input(input, lexer, parser);

>>>>>>> 8a6dcff0a2db1590bc1a7105abadcdbcd0df3517
    system("pause");
}

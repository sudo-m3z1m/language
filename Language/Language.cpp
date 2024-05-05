#include "lexer.h"
#include "parser.h"

bool analyze_input(std::string input, Lexer lexer)
{
	std::string word;

	for (int letter_index = 0; letter_index < input.length(); letter_index++)
	{
		if (input[letter_index] == ' ')
		{
			if (!lexer.input_is_valid(word))
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
    
    Lexer lexer;
    analyze_input(input, lexer);

    system("pause");
}

#include "lexer.h"

int main()
{
    std::string input;

    std::cout << "Enter string -> ";
    std::getline(std::cin, input);
    std::cout << std::endl;
    
    Lexer lexer(input);
    if (lexer.input_is_valid())
        std::cout << input << std::endl;
    else
        std::cout << "Compiling error" << std::endl;
    system("pause");
}

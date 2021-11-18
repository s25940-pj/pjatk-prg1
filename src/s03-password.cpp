#include <iostream>
#include <string>

auto ask_user_for_password(std::string prompt) -> std::string
{
    auto line = std::string{};
    std::cout << prompt;
    std::getline(std::cin, line);
    return line;
}

auto main(int, char* argv[]) -> int
{   
    auto a = ask_user_for_password;
    while (a("Type in your password, please: ") != argv[1])
	;

    return 0;
}

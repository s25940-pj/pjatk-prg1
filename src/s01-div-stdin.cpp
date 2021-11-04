# include <iostream>

auto ask_user_for_integer(std::string prompt) -> int
{
    std::cout << prompt << " int:";
	
    auto n = std::string{};
    std::getline(std::cin, n);
    
    return std::stoi(n);    
}


auto main() -> int
{
    auto const a = ask_user_for_integer("Type in int, please. ");
    auto const b = ask_user_for_integer("Type in int, please. ");

    std::cout << (a / b) << "\n";

    return 0;
}

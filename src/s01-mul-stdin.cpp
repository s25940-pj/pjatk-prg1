# include <iostream>


int input;

auto ask_user_for_integer() -> int
{
std::cout << "Type in int, please: ";
std::cin >> input;

return input;  
}


auto main() -> int
{
auto const a = ask_user_for_integer();
auto const b = ask_user_for_integer();

std::cout << (a * b) << "\n";

return 0;
}

#include <iostream>
#include <string>

auto main(int argc, char* argv[]) -> int
{    		
    (void)argc; // Prevents from the "unused parameter 'argc'" error.
		
    auto const name = std::string{argv[1]};
    std::cout << "Hello, " << name << "!\n";

    return 0;
}

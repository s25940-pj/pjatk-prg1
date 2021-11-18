#include <iostream>
#include <random>
#include <string>


auto guess(std::string prompt) -> int
{
    auto line = std::string{};

    std::cout << prompt;
    std::getline(std::cin, line);
   
    return std::stoi(line);
}


auto main() -> int
{   
    auto rd = std::random_device{};
    auto d = std::uniform_int_distribution<int>{1, 100};
    auto n_to_guess = d(rd);
    auto user_guess = guess("Make your guess: ");
    auto attempt = 1;

    while (user_guess != n_to_guess)
    {       
            attempt ++;

	    if (user_guess > n_to_guess)
	    {
	     std::cout << "Too high!\n";
	    }
	    else if (user_guess < n_to_guess)
	    {
	     std::cout << "Too low!\n";
	    }

	    
	    user_guess = guess("Try your luck again: ");
    }

    std::cout << "\n\nYou got it! Made it on your " << attempt << " attempt.\n";
    
		
    return 0;
}

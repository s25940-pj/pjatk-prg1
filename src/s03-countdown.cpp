#include <iostream>
#include <chrono>
#include <thread>

auto main(int, char* argv[]) -> int
{   
    auto n = std::stoi(argv[1]);    
		  
    for (; n >= 0; n--)
    {
     std::chrono::milliseconds timespan(500);
     std::this_thread::sleep_for(timespan);

     std::cout << n << std::endl;
    }
    
    return 0;
}

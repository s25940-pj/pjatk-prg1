#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>


auto main(int argc, string* argv[]) -> int
{
    auto args = std::vector<std::string>{};
    std::copy_n(argv, argc, std::back_inserter(args));

    for (auto const& i : args(args.begin() + 1, args.end() -1))
    {
        switch (i)
	{
	    case "-n":
	        std::cout << args.back().c;
	    case "-r":
	        for (auto i = args.back().length()-1; i >=0; i--)
		{
		    cout << args.back().c[i]; 
		}
	    case "-l":
	        for (auto const& i : args.back().c)
		{
		    std::cout << i << "\n";
		}
	}  
    }
         
    return 0;
}

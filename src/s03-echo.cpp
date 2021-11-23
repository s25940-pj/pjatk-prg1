#include <iostream>
#include <algorithm>
#include <iterator>
#include <string>
#include <vector>
#include <bits/stdc++.h>
#include <boost/lexical_cast.hpp>

auto i = 1;


auto format(auto argc_, bool n, bool r, bool l, const std::vector<std::string> to_format) -> int
{
	auto separator = std::string{};	

	if (l == true)
	{	
		separator = "\n";
	}
	
	for (; i <= argc_; i++)
	{	
		{
		auto stringed_each = boost::lexical_cast<std::string>(to_format[i]);
		if (r == true)
		{	
			reverse(stringed_each.begin(), stringed_each.end());
		}

		std::cout << stringed_each << separator;
		}			
	}

	if (n == true)
	{
		std::cout << "\n";
	}
	
	return 0;
	
}

auto main(int argc, char* argv[]) -> int
{
	auto args = std::vector<std::string>{};
	std::copy_n(argv, argc, std::back_inserter(args));
	
	auto new_line = true;
	auto reverse = false;
	auto one_for_line = false;
		
	for (; i <= argc - 2; i++) // set proper flags
	{
		if (strcmp(argv[i], "-n") == 0)
			new_line = false;
		if (strcmp(argv[i], "-r") == 0)
			reverse = true;
		if (strcmp(argv[i], "-l") == 0)
			one_for_line = true;
	}

	auto to_format = args;

	format(argc, new_line, reverse, one_for_line, to_format);
	return 0;	
}


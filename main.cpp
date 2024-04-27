#include <iostream>
#include <ctime>

// The main() function
int main()
{
	std::time_t tim = std::time(nullptr);
	//std::tm* ltim = std::localtime(&tim);

	std::cout << std::ctime(&tim) << std::endl;

	//std::cout << (ltim->tm_year + 1900) << '-' << (ltim->tm_mon + 1) << '-' << (ltim->tm_mday) << std::endl;

	//std::cout << (ltim->tm_hour) << ':' << (ltim->tm_min) << ':' << (ltim->tm_sec) << std::endl;

	return 0;
}

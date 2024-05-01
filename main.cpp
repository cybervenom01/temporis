#include <iostream>
#include <ctime>

// The main() function
int main()
{
	std::time_t tim = time(0);
	struct std::tm* ltim = gmtime(&tim);

	std::cout << "This returns the UTC: " << std::asctime(ltim) << std::endl;	
	std::cout << "This returns the time and date: " << std::ctime(&tim) << std::endl;	

	return 0;
}

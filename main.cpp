#include <iostream>
#include <ctime>

// Display Time Function
void DisplayTime(const time_t* tim);
       
// The main() function
int main()
{
	std::time_t tim = std::time(0);
//	struct std::tm* ltim = std::localtime(&tim);
	DisplayTime(&tim);

	return 0;
}

void DisplayTime(const time_t* tim)
{
	std::cout << "The time is: " << std::localtime(tim);
}


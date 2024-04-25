#include <iostream>
#include <ctime>

// Display Time Function
void DisplayTime(const time_t* tim);
       
// The main() function
int main()
{
	std::time_t tim = std::asctime(0);
	std::tm* ltim = std::localtime(&tim);
	DisplayTime(*ltim);

	return 0;
}

void DisplayTime(const time_t* tim)
{
	std::cout << "The time is: " << std::localtime(tim);
}


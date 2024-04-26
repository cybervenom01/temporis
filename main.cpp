#include <iostream>
#include <ctime>

// Display Time Function
//void DisplayTime(const time_t* tim);
       
// The main() function
int main()
{
	std::time_t tim = mktime(0);
	std::tm *ltim = localtime(&tim);

	std::cout << "Today is " << &ltim << std::endl;

	return 0;
}

//void DisplayTime(const time_t* tim)
//{
//	std::cout << "The time is: " << std::localtime(tim);
//}


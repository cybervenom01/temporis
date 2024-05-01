#include <iostream>
#include <ctime>

// The main() function
int main()
{
	std::time_t tim = time(0);
	struct std::tm* ltim = gmtime(&tim);

	std::cout << std::asctime(ltim) << std::endl;	// XXX: Returns correct time and date
	std::cout << std::ctime(&tim) << std::endl;	// FIXME: Returns a hexadecimal number instead of time and date

	return 0;
}

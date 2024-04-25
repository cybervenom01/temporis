Passage of Time
	Time is the progression of events from the past to the present into the future. It is the
fourth dimension of reality, used to describe events in three-dimensional space. It is not
something we can see, touch, or taste, but we can measure its passage.

Latin: Temporis

Description:
	This program gets the current time and date and displays it on screen.

Original Program:

/* Original Program.
 * #include <iostream>
 * #include <ctime>
 *
 * void display_time(const time_t* tim)
 * {
 *      std::cout << "The time is: " << std::localtime(tim);
 * };
 *
 * void display_time(struct tm* tim)
 * {
 *      std::cout << "The time is: " << std::mktime(tim);
 * };
 *
 * int main()
 * {
 *      std::time_t tim = std::mktime(0);
 *      struct std::tm* ltim = std::localtime(&tim);
 *      display_time(ltim);
 *      display_time(&tim);
 *      return 0;
 * }
 */


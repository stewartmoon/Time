/* Author: Stewart Moon and Sam Tregea
Class: CSC 223-100
Professor: Jeffrey Howard
Due Date: 11/16/2017
Page & Problem #: Page 278, #4
Description: This is the actual Source File.  This program, counts the total amount of time passed since January 1st, 1970. 
Then calculates the amount of hours,minutes,and seconds
*/
#include "time.h"
#include <iostream>

using namespace std;

int main()
{
  //Get time
	time_t t = time(0);

  //Declare objects of time
	Time time;
	Time time2;

  //Calculate time
	time.setTime(t);
  
  //Output Time in Milliseconds,Hours,Minutes,Seconds
	cout << "Milliseconds: " << t << endl;
	cout << "Hours: " << time.getHour() << endl;
	cout << "Minutes: " << time.getMinute() << endl;
	cout << "Seconds: " << time.getSecond() << endl;

  return 0;
}
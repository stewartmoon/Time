/* Author: Stewart Moon and Sam Tregea
Class: CSC 223-100
Professor: Jeffrey Howard
Due Date: 11/16/2017
Page & Problem #: N/A
Description: This is the Implentation File
*/
#include "time.h"

//no-arg constructor that creates a Time object for the current time
Time::Time()
{
	time_t t = time(0);
}

//Constructor That constructs a Time object with a specified elapsed time since midight, January 1, 1970, in milliseconds
Time::Time(int milli)
{
	time_t t = time(0);
	hour = (milli / (1000 * 60 * 60)) % 24;
	minute = (milli / (1000 * 60)) % 60;
	seconds = (milli / (1000)) % 60;
}

//Constructor that constructs a time object with the specified hour,minute,second
Time::Time(int hourParam, int minuteParam, int secondsParam)
{
	time_t t = time(0);
	hour = hourParam;
	minute = minuteParam;
	seconds = secondsParam;
}

void Time::setHour(int hourParam)
{
	hour = hourParam;
}
void Time::setMinute(int minParam)
{
	minute = minParam;
}
void Time::setSecond(int secondParam)
{
	seconds = secondParam;
}


//Get method for hour
int Time::getHour()
{
	return hour;
}

//Get method for minute
int Time::getMinute()
{
	return minute;
}

//Get method for second
int Time::getSecond()
{
	return seconds;
}

//Constructor that calculates time in Hours,Minutes,Seconds
void Time::setTime(long elapseTime)
{
	hour = (elapseTime / (1000 * 60 * 60)) % 24;
	minute = (elapseTime / (1000 * 60)) % 60;
	seconds = (elapseTime / (1000)) % 60;
}

//overloading operator to use <<
ostream& operator<<(ostream & outputStream, Time& time)
{
	return outputStream;
}
//overloading operator to use >>
istream& operator >> (istream & inputStream, Time& time)
{
	return inputStream;
}
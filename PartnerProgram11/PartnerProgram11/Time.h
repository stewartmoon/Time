/* Author: Stewart Moon and Sam Tregea
Class: CSC 223-100
Professor: Jeffrey Howard
Due Date: 11/16/2017
Page & Problem #: N/A
Description: This is the header file
*/
#pragma once
#include <iostream>
#include <ctime>
using namespace std;

class Time
{
private:
	//Declare variables
	int hour;
	int minute;
	int seconds;
	int miliseconds;

public:
	//Constructors
	Time();
	Time(int milli);
	Time(int hourParam, int minParam, int secondParam);

	//Local member-functions
	int getHour();
	int getMinute();
	int getSecond();
	void setHour(int hourParam);
	void setMinute(int minParam);
	void setSecond(int secondParam);
	void setTime(long elapseTime);
	friend ostream& operator<<(ostream & outputStream, Time& time);
	friend istream& operator >> (istream & inputStream, Time& time);

};
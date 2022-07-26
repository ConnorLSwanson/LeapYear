// LeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Connor Swanson
// Activision Blizzard
// 7/20/22

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

bool CheckForLeapYear(int year);
void DisplayLeapYear(bool isLeapYear);

int main()
{
    // current date/time based on current system
    time_t now = time(0);

    // convert now to string form
    char* dt = ctime(&now);

    // format -> day mth DD hh:mm:ss YYYY
    // e.g.   -> Tue Jul 26 14:01:32 2022
    string date = (string)dt;

    string year; 
    year.push_back(date[date.size() - 5]);
    year.push_back(date[date.size() - 4]);
    year.push_back(date[date.size() - 3]);
    year.push_back(date[date.size() - 2]);

    int currentYear = stoi(year);
    cout << "current year " << currentYear << endl;

    // Run check if this is leap year.
    bool isLeapYear = CheckForLeapYear(currentYear);

    // Tell the user if it is currently a leap year.
    DisplayLeapYear(isLeapYear);
}

bool CheckForLeapYear(int year) 
{
    if (year % 100 == 0)
    {
        return false;
    }
    else if (year % 4 == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void DisplayLeapYear(bool isLeapYear)
{
    if (isLeapYear)
    {
        cout << "This year is a leap year!" << endl;
    }
    else
    {
        cout << "This is not a leap year... " << endl;
    }
}
// LeapYear.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Connor Swanson
// Activision Blizzard
// 7/20/22

#include <iostream>
#include <ctime>
#include <string>

using namespace std;

int main()
{
    // current date/time based on current system
    time_t now = time(0);

    // convert now to string form
    char* dt = ctime(&now);

    string date = (string)dt;

    char year1 = date[21];
    char year2 = date[22];
    char year3 = date[23];
    char year4 = date[24];

    string year; 
    year.push_back(date[20]);
    year.push_back(date[21]);
    year.push_back(date[22]);
    year.push_back(date[23]);

    int currentYear = stoi(year);

    // Run check if this is leap year.
    bool isLeapYear = false;
    if (currentYear % 100 == 0)
    {
        isLeapYear = false;
    }
    else if (currentYear % 4 == 0)
    {
        isLeapYear = true;
    }
    else
    {
        isLeapYear = false;
    }


    // Tell the user if it is currently a leap year.
    if (isLeapYear)
    {
        cout << "This year is a leap year!" << endl;
    }
    else
    {
        cout << "This is not a leap year... " << endl;
    }
}

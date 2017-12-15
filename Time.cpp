#include "Time.h"
#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;

Time::Time()
{

}

void Time::setMinutes(int minutes)
{
    this->minutes = minutes;
}

int Time::getMinutes()
{
    return minutes;
}

void Time::setHours(int hours)
{
    this->hours = hours;
}

int Time::getHours()
{
    return hours;
}

Time Time :: operator+()
{

}

Time Time::getCurrentTime()
{
    time_t t = time(0);   // get time now
    struct tm * now = localtime(&t);

    Time time;
    time.setHours(now->tm_hour);
    time.setMinutes(now->tm_min);

    return time;
}





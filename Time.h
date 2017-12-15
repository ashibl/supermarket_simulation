#ifndef TIME_H
#define TIME_H


class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time();
        Time operator+();

};

#endif // TIME_H

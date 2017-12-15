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
        static Time getCurrentTime();
};

#endif // TIME_H

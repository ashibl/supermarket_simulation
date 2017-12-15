#ifndef TIME_H
#define TIME_H


class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time();
        int gethours();
        Time operator+();

};

#endif // TIME_H

#ifndef TIME_H
#define TIME_H


class Time
{
    private:
        int hours;
        int minutes;
    public:
        Time();
        int getHours();
        void setHours (int hours);
        int getMinutes ();
        void setMinutes(int minutes);
        Time operator+();
        static Time getCurrentTime();
};

#endif // TIME_H

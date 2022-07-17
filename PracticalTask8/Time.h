#pragma once
class Time 
{
public:
    Time();
    Time(int, int, int);
    void set_hours(int);
    int get_hours();
    void set_minutes(int);   
    int get_minutes();
    void set_seconds(int);
    int get_seconds();

    void ShowTime();
    int TimeToSeconds();
    void PlusTime(Time time);

private:
    int hours;
    int minutes;
    int seconds;
};
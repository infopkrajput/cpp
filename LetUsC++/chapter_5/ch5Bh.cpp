#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class time12
{
private:
    int hour;
    int minute;
    string ampm;

public:
    time12(int hour = 0, int minute = 0, string ampm = "AM")
    {
        this->hour = hour;
        this->minute = minute;
        this->ampm = ampm;
    }
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    string getAMPM()
    {
        return ampm;
    }

    void displayTime()
    {
        if (minute > 9)
            cout << hour << ":" << minute << " " << ampm << endl;
        else
            cout << hour << ":0" << minute << " " << ampm << endl;
    }
    time12(time24 t)
    {
        int h = t.getHour();
        int m = t.getMinute();
        string ampm;
        if (h >= 12)
        {
            h = h - 12;
            ampm = "PM";
        }
        else
        {
            ampm = "AM";
        }
        this->hour = h;
        this->minute = m;
        this->ampm = ampm;
    }
};

class time24
{
private:
    int hour;
    int minute;

public:
    time24(int hour = 0, int minute = 0)
    {
        if (hour >= 0 && hour <= 24 && minute >= 0 && minute <= 60)
        {
            this->hour = hour;
            this->minute = minute;
        }
        else
        {
            cout << " You Give wrong time in 24 format" << endl;
        }
    }
    int getHour()
    {
        return hour;
    }
    int getMinute()
    {
        return minute;
    }
    void displayTime()
    {
        if (minute > 9)
            cout << hour << ":" << minute << endl;
        else
            cout << hour << ":0" << minute << endl;
    }
    time24(time12 t)
    {
        int h = t.getHour();
        int m = t.getMinute();
        string ampm = t.getAMPM();
        if (ampm == "PM" && h != 12)
        {
            h += 12;
        }
        else if (ampm == "AM" && h == 12)
        {
            h = 0;
        }

        this->hour = h;
        this->minute = m;
    }
};
int main()
{
    time12 a1(4, 12, "PM"), a2;
    time24 b1(13, 16), b2;
    b2 = a1;
    b2.displayTime();
    a2 = b1;
    a2.displayTime();
    return 0;
}
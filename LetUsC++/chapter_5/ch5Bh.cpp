// Write a program that consists of two classes time12 and time24  the first one maintains time on 12 hourly basis, whereas the second one keeps it on 24 hourly basis. Provide a conversion function to carry out the conversion from the object of one type to another.
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class time24;
class time12
{
private:
    int hour;
    int minute;
    string ampm;

public:
    time12(int, int, string);

    int getHour();
    int getMinute();
    string getAMPM();
    void displayTime();
    time12(time24 t);
};
class time24
{
private:
    int hour;
    int minute;

public:
    time24(int, int);
    int getHour();
    int getMinute();
    void displayTime();
    time24(time12 t);
};

time12::time12(int hour = 0, int minute = 0, string ampm = "AM")
{
    this->hour = hour;
    this->minute = minute;
    this->ampm = ampm;
}
int time12::getHour()
{
    return hour;
}
int time12::getMinute()
{
    return minute;
}
string time12::getAMPM()
{
    return ampm;
}
time24::time24(int hour = 0, int minute = 0)
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
int time24::getHour()
{
    return hour;
}
int time24::getMinute()
{
    return minute;
}
void time24::displayTime()
{
    if (minute > 9 && hour > 9)
        cout << hour << ":" << minute << endl;
    else if (minute < 10 && hour < 10)
        cout << "0" << hour << ":0" << minute << endl;
    else if (hour < 10 && minute > 9)
        cout << "0" << hour << ":" << minute << endl;
    else if (hour > 9 && minute < 10)
        cout << hour << ":0" << minute << endl;
}
void time12::displayTime()
{
    if (minute > 9 && hour > 9)
        cout << hour << ":" << minute << " " << ampm << endl;
    else if (minute < 10 && hour < 10)
        cout << "0" << hour << ":0" << minute << " " << ampm << endl;
    else if (hour < 10 && minute > 9)
        cout << "0" << hour << ":" << minute << " " << ampm << endl;
    else if (hour > 9 && minute < 10)
        cout << hour << ":0" << minute << " " << ampm << endl;
}

time24::time24(time12 t)
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
time12::time12(time24 t)
{
    int h = t.getHour();
    int m = t.getMinute();
    string str = "AM";
    if (h == 0)
    {
        h = 12;
    }
    else if (h == 12)
    {
        str = "PM";
    }
    else if (h > 12)
    {
        h -= 12;
        str = "PM";
    }
    this->hour = h;
    this->minute = m;
    this->ampm = str;
}
int main()
{
    time12 a1(4, 05, "PM");
    time24 b1;
    b1 = a1;
    printf("Time in 12 hour format          : ");
    a1.displayTime();
    printf("After Convert in 24 hour format : ");
    b1.displayTime();
    printf("----------------------------------------------------------------\n");
    time24 b2(16, 25);
    printf("Time in 24 hour format          : ");
    b2.displayTime();
    time12 a2;
    printf("After Convert in 12 hour format : ");
    a2 = b2;
    a2.displayTime();

    return 0;
}

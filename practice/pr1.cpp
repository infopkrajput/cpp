#include <iostream>
#include <bits/stdc++.h>
using namespace std;
long long int binary_conversion(long long int num)
{
    if (num == 0)
    {
        return 0;
    }
    else
    {
        return (num % 2) + 10 * binary_conversion(num / 2);
    }
}
int main()
{
    string date = "2080-02-29";
   string temp;
        string binaryDate;
        long long int m;
        char ch;
        for(int i = 0;i<4;i++)
        {
            temp += date[i];
        }
        m = stoi(temp);
        m = binary_conversion(m);
        string str = to_string(m);
        binaryDate += str;
        binaryDate += "-";
        temp = "";
        str = "";
        for(int i = 5;i<7;i++)
        {
            temp += date[i];
        }
        m = stoi(temp);
        m = binary_conversion(m);
        str = to_string(m);
        binaryDate += str;
        binaryDate += "-";
        temp = "";
        str = "";
        for(int i = 8;i<10;i++)
        {
            temp += date[i];
        }
        cout << temp << endl;
        m = stoi(temp);
        m = binary_conversion(m);
        str = to_string(m);
        binaryDate += str;
        cout << "Binary representation of the given date: " << binaryDate << endl;    
    return 0;
}
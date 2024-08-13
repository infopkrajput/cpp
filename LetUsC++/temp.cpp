#include <iostream>
#include <bits/stdc++.h>
using namespace std;
class String
{
private:
    char str[20];

public:
    String()
    {
        str[0] = '\0';
    }
    String(int n)
    {
        itoa(n, str, 10);
    }

    String(char *s)
    {
        strcpy(str, s);
    }
    void displayData()
    {
        cout << "data " << str << endl;
    }

    operator int()
    {
        int i, len, num = 0;
        len = strlen(str);
        for (i = 0; i < len; i++)
        {
            num = num*10 + str[i] - '0';
        }
        return num;
    }
};
int main()
{

    String s1(123); // creation 
    s1.displayData();
    s1 = 150; // reuse 
    s1.displayData();
    return 0;
}
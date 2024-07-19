#include <iostream>
using namespace std;
void display(char ch = '*',int num = 80);
int main()
{
    display();
    return 0;
}
void display(char ch,int num)
{
    for (int i = 0; i < 5; i++)
    {
        cout << ch;
    }
    cout << endl;
    for (int i = 0; i < 15; i++)
    {
        cout << '-';
    }
    cout << endl;
    for (int i = 0; i < 20; i++)
    {
        cout << '=';
    }
    cout << endl;
}
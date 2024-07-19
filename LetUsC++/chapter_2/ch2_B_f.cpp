#include <iostream>
using namespace std;
void fun(int x, int y , int z);
void fun(int x , int y);
int main()
{
    fun(1,2);
    return 0;
}
void fun(int x, int y, int z)
{
    cout << x << endl
         << y << endl
         << z << endl;
}
void fun(int x, int y)
{
    cout << x << endl
         << y << endl;
}
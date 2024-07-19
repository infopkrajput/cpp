#include <iostream>
using namespace std;
void fun(int = 10, int = 20, int = 30, int = 40);
int main()
{
    fun(1,20,3);
    return 0;
}
void fun(int a, int b, int c, int d)
{
    cout << a << ' ' << b << ' ' << c << ' ' << d << endl;
    return;
}
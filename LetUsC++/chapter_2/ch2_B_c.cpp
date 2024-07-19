#include <iostream>
using namespace std;
int fun(int,int);
int fun(int,int);
int main()
{
    int a;
    a = fun(10,30);
    cout << a << endl;
    return 0;
}
int fun(int x,int y)
{
    return x+y;
}
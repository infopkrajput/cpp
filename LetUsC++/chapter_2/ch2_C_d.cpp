// #include <iostream>
// using namespace std;
// int fun(int x);
// float fun(float y);
// int main()
// {
//     int a = 4;
//     float b = 4.0;
//     fun(a);
//     fun(b);
//     return 0;
// }
// int fun(int)
// {
//     cout<<"fun(int)"<<endl;
// }
// float fun(float)
// {
//     cout<<"fun(float)"<<endl;
// }
#include <iostream>
using namespace std;

// Function overloading
int fun(int x)
{
    cout << "fun(int)" << endl;
    return x;
}

float fun(float y)
{
    cout << "fun(float)" << endl;
    return y;
}

int main()
{
    int a = 4;
    float b = 4.0;

    fun(a); // Calls fun(int)
    fun(b); // Calls fun(float)

    return 0;
}

#include <iostream>
using namespace std;
int main()
{
    void fun1(void);
    void fun2(void);
    fun1();
    return 0;
}
void fun1(void)
{
    fun2();
    cout << "Hi Hello" << endl;
}
void fun2(void)
{
    cout << "To you" << endl;
}
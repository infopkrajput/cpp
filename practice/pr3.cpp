#include <bits/stdc++.h>
using namespace std;
int sub(int a = 20, int b = 2000)
{
    int result;
    result = a - b;
    return result;
}
int main()
{
    int a = 100;
    int b = 200;
    int result = sub(b);
    cout << "result = " << result << endl;
    return 0;
}
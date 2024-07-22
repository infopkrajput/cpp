/*
About class and objects
*/
#include <iostream>
using namespace std;
class Rectangle
{
private:
    int len, br;

public:
    void getData()
    {
        cout << endl
             << endl
             << "Enter length and breadth ";
        cin >> len >> br;
    }
    void setData(int l, int b)
    {
        len = l;
        br = b;
    }
    void displayData()
    {
        cout << endl
             << "length: " << len;
        cout << endl
             << "breadth: " << len;
    }
    void areaPeri()
    {
        int a, p;
        a = len * br;
        p = 2 * (len + br);
        cout << endl
             << "Area: " << a;
        cout << endl
             << "Perimeter: " << p << endl;
    }
};
 int main()
{

    Rectangle r1,r2,r3;
    r1.setData(10,20);
    r1.displayData();
    r1.areaPeri();

    r2.setData(5,8);
    r2.displayData();
    r2.areaPeri();

    r3.getData();
    r3.displayData();
    r3.areaPeri();
    return 0;
}
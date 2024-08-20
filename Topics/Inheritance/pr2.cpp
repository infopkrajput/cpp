// Single inheritance
#include <iostream>
using namespace std;
class B
{
private:
    int a;

public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};
class D : private B
{
private:
    int c;

public:
    void mul();
    void display();
};
//----------------------------------------------------------------

void B::get_ab()
{
    cout << "Enter the values for a and b ";
    cin >> a >> b;
}

int B::get_a()
{
    return a;
}

void B::show_a()
{
    cout << "a = " << a << endl;
}

void D::mul()
{
    c = b * get_a();
}

void D::display()
{
    cout << "a = " << get_a() << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
}
int main()
{
    D d;
    // d.get_ab(); // wont work because get_ab() is private for class D
    d.mul();
    // d.show_a(); // wont work because show_ab() is private for class D
    d.display();
    // d.b = 20; // wont work because b is private variable for class D
    d.mul();
    d.display();
    return 0;
}
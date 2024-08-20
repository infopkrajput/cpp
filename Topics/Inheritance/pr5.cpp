#include <iostream>
using namespace std;

class Student // base class for Test
{
protected:
    int roll_number;

public:
    void get_roll_number(int);
    void print_roll_number();
};

void Student::get_roll_number(int x)
{
    roll_number = x;
}

void Student::print_roll_number()
{
    cout << "Roll No. : " << roll_number << endl;
}

class Test : public Student // derived class of Student and base class of Result class
{
protected:
    double sub1;
    double sub2;

public:
    void get_marks(double, double);
    void print_marks();
};

void Test::get_marks(double x, double y)
{
    sub1 = x;
    sub2 = y;
}

void Test::print_marks()
{
    cout << "Marks in Sub1 : " << sub1 << endl;
    cout << "Marks in Sub2 : " << sub2 << endl;
}

class Result : public Test // derived from Test
{
private:
    double total;

public:
    void calculate_total();
};

void Result::calculate_total()
{
    total = sub1 + sub2;
    print_roll_number();
    print_marks();
    cout << "Total marks : " << total << endl;
}

int main()
{
    Result student1;
    student1.get_roll_number(101);
    student1.get_marks(75.5, 85.2);
    student1.calculate_total();
    return 0;
}

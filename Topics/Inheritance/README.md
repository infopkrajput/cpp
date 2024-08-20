# Inheritance

The C++ classes can be Reused in several ways. Once a class has been written and tested, it can be adopted by other programmers to suit their requirements. This is basically done by creating new classes, reusing the properties of existing ones. The mechanism of deriving a new class from and old one is called inheritance (or derivation). The old class is referred to as a base class and the new one is called the derived class or subclass.
The derived class inherits some or all of the traits from the base class. A class can also inherit properties from more than one class or from more than one level.

## types of Inheritance

1. Single inheritance
2. Multiple inheritance
3. Hierarchical inheritance
4. Multi level inheritance
5. Hybrid inheritance

### Defining Derived Class

A drive to class can be defined by specifying its relationship with the base class. In addition to its own detail, the general form of defining a drive to class is.

```cpp
class derived_class_name : visiblity_mode base_class_name
{
    ..........//////
    ..........//////
    ..........//////
};
```

The colon `:` indicates that the drive_class_name is derived from the base_class_name. The visibility mode is optional. And if present may be either `private` or `public`, the default visibility mode is `private`. Visibility mode is specifies whether the features of the base class are privately derived or publicly derived.<br> <br>
When a base class is privately inherited by a derived class, `public member` of the base class become `private members` of the drive to class. and therefore the `public members` of the base class can only be assessed by the member function of the derived class. They are inaccessible to the objects of the derived class. Remember, a `public` member of a class can be assessed by its own objects using the dot operator. The result is that no member of the base class is accessible to the object of the derived class.<br><br>
On the other hand, when the base class is publicly inherited, `public member` of the base class become `public members` of the drive to class, and therefore they are accessible to the objects of the derived class in both the cases, the `private` members are not inherited and therefore the private member of a base class will never become the member of the derived class.
<br><br>

## 1. Single inheritance

Let us consider a simple example of illustrate inheritance.

```cpp
// Single inheritance
#include <iostream>
using namespace std;
class B
{
private:
    int a;

public:
    int b;
    void set_ab();
    int get_a();
    void show_a();
};
class D : public B
{
private:
    int c;

public:
    void mul();
    void display();
};
//----------------------------------------------------------------

void B::set_ab()
{
    a = 10;
    b = 20;
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
    d.set_ab();
    d.mul();
    d.show_a();
    d.display();

    d.b = 40;
    d.mul();
    d.display();

    return 0;
}

```

The Class `D` is `public` derivation of the base class `B`. Therefore, `D` inherits all the public members of `B` and retains their visibility. Thus, a public member of the base class `B` is also a public member of the derived class `D`, the private member of `B` cannot be inherited by `D`.<br>
Example for Single inheritance : private member

```cpp
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
```

#### Making a private member inheritable

We have just seen how to increase the capability of an existing class without modifying it. We have also seen that that a private member of a base class cannot be inherited and therefore it is not available for the drive to class directly. What do we do if the private data needs to be inherited by a drive to class? This can be accomplished by modifying the visibility limit of the `private member` by making it `public`. This would make it accessible to all the other functions of the program, thus taking away the advantage of data hiding C provide a 3rd visibility modifier `protected`, which serve. a limited purpose of inheritance, a member declared as protected, is accessible by the member function within its class and any class immediately derived from it. It cannot be assessed by a function outside these three classes. A class can now use all three visibility modes. when a protected member is inherited in public mode, it become protected in derived class too and therefore it accessible by the member function of the class.<br>
Example:

```cpp
// Single inheritance
#include <iostream>
using namespace std;
class B
{
protected:
    int a;

public:
    int b;
    void get_ab();
    int get_a();
    void show_a();
};
class D : public B
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
    d.get_ab();
    d.mul();
    d.show_a();
    d.display();
    d.b = 20;
    d.mul();
    d.display();
    return 0;
}
```

## 2. Multiple inheritance

It is not uncommon that a class is derived from another drive class. The `Class A` serves as a base class for the derived `class B`, which in turn serves as a base class for the derived `class c`. The `Class B` is known as intermediate base class, since it provide a link for the inheritance between `A` and `C`. The chain ABC is known as inheritance path.<br>
This process can be extended to any number of levels of inheritance.<br>
Example:

```cpp
#include <iostream>
using namespace std;

class Student // base class for test
{
protected:
    int roll_number;

public:
    void get_roll_number(int);
    void print_roll_number();
};
void Student ::get_roll_number(int x)
{
    roll_number = x;
}
void Student ::print_roll_number()
{
    cout << "Roll No. : " << roll_number << endl;
}
class test : public Student // derived class of Student and base class of result class
{
protected:
    double sub1;
    double sub2;

public:
    void get_marks(double, double);
    void print_marks();
};
void test ::get_marks(double x, double y)
{
    sub1 = x;
    sub2 = y;
}

void test ::print_marks()
{
    cout << "Marks in Sub1 : " << sub1 << endl;
    cout << "Marks in Sub2 : " << sub2 << endl;
}

class result : public test // derived from test
{
private:
    double total;

public:
    void calculate_total();
};

void result ::calculate_total()
{
    total = sub1 + sub2;
    print_roll_number();
    print_marks();
    cout << "Total marks : " << total << endl;
}
int main()
{
    result student1;
    student1.get_roll_number(101);
    student1.get_marks(75.5, 85.2);
    student1.calculate_total();
    return 0;
}
```

/*
De constructor 
Constructor and destructor both called automatically while creating any objects.  
*/
#include <iostream>
using namespace std;
class Integer
{
private:
    int a,b;
public:
    Integer(/* args */);
    ~Integer();
};

Integer::Integer(/* args */)
{
    cout << "inside constructor"<<endl;
}

Integer::~Integer()
{
    cout << "inside destructor"<<endl;
}


int main()
{
    Integer a;
    return 0;
}
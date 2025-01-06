#include <bits/stdc++.h>
using namespace std;
int main()
{
    // open the file
    ifstream in;
    in.open("my.txt");

    // we can also use 
    // ifstream in("my.txt")

    string str;
    int x;
    // check whether the file open or not
    if (in)
    {
        in >> str;
        in >> x;
    }
    else
    {
        cout << "No file exist " << endl;
    }
    cout << str << endl;
    cout << x << endl;
    // check the file is ended or not
    if (in.eof())
    {
        cout << "The file is ended" << endl;
    }
    in.close();
    return 0;
}
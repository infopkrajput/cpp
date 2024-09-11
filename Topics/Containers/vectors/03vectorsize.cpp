#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> i;
    i.push_back(1);
    i.push_back(2);
    i.push_back(3);
    i.push_back(4);
    cout << i[0] << " " << i[1] << " " << i[2] << " " << i[3] << endl;
    cout << "Size: " << i.size() << endl;
    cout << "Capacity: " << i.capacity() << endl;
    vector<int> i2;
    i2.push_back(1);
    i2.push_back(2);
    i2.push_back(3);
    cout << i[0] << " " << i[1] << " " << i[2] << endl;
    cout << "Size: " << i2.size() << endl;
    cout << "Capacity: " << i2.capacity() << endl;
    return 0;
}
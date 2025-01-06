#include <bits/stdc++.h>
using namespace std;
int main()
{
    ofstream outfile("my.txt");
    outfile << "Hello" << endl;
    outfile << 25 << endl;
    outfile.close();
    return 0;
}
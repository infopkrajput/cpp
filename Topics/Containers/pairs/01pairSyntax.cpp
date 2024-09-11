#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    cout << "Single Pair " << endl;
    pair<int, int> p = {1, 2};
    cout << "p.first = " << p.first << ", p.second = " << p.second << endl;
    p.first = 10;
    p.second = 20;
    cout << "p.first = " << p.first << ", p.second = " << p.second << endl
         << endl;
    cout << "Nested Pair " << endl;
    pair<int, pair<int, int>> p2 = {1, {2, 3}};
    cout << "p2.first = " << p2.first << ", p2.second.first = " << p2.second.first << ", p2.second.second = " << p2.second.second << endl;
    p2.first = 100;
    p2.second.first = 200;
    p2.second.second = 300;
    cout << "p2.first = " << p.first << ", p2.second.first = " << p2.second.first << ", p2.second.second = " << p2.second.second << endl
         << endl;
    cout << "Pair of array" << endl;
    pair<int, int> p3[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << "p3[0].first = " << p3[0].first << ", p3[0].second = " << p3[0].second << endl;
    p3[0].first = 1000;
    p3[0].second = 2000;
    cout << "p3[0].first = " << p3[0].first << ", p3[0].second = " << p3[0].second << endl;
    cout << "p3[1].first = " << p3[1].first << ", p3[1].second = " << p3[1].second << endl;
    return 0;
}
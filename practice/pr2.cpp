#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1,2,3};
    int x = sizeof(arr) / sizeof(arr[0]);
    cout << "Length of array: " << x << endl;
    return 0;
}
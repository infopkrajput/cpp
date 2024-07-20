#include <iostream>
using namespace std;
struct matrix
{
    int arr[3][3];
};
matrix operator+(matrix &a, matrix &b);
void entervalue(matrix &x);
void printvalue(matrix &x);
int main()
{
    matrix a, b, c;
    entervalue(a);
    entervalue(b);
    cout << "---------------\n";
    printvalue(a);
    cout << "---------------\n";
    printvalue(b);
    c = a + b;
    cout << "---------------\n";
    printvalue(c);
    return 0;
}
void printvalue(matrix &x)
{
    int i, j;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
        {
            cout << x.arr[i][j] << " ";
        }
        cout << "\n";
    }
}
void entervalue(matrix &x)
{
    int i, j;
    cout << "Enter 9 values of matrix : ";
    for (i = 0; i < 3; i++)
    {

        for (j = 0; j < 3; j++)
        {
            cin >> x.arr[i][j];
        }
    }
}

matrix operator+(matrix &a, matrix &b)
{

    matrix result;
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            result.arr[i][j] = a.arr[i][j] + b.arr[i][j];
        }
    }
    return result;
}
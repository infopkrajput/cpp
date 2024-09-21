#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int f, s, w, c;
	cin >> f >> s >> w;
	for (int i = f; i <= s; i += w)
	{
		c = i - 32 * 0.555;
		cout << i << " " << c << " " << endl;

	}
    return 0;
}
#include <iostream>

using namespace std;

int main()
{
	int n, nn=0;
	cin >> n;

	while (n > 0)
	{
		nn = nn * 10 + (n % 10);
		n = n / 10;
	}

	cout << nn;
}

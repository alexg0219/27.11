#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n, x, c = 0;
	cin >> n;
	vector <int> a(n);
	vector <int> a1;
	vector <int> a2;

	a.clear();
	a1.clear();
	a2.clear();

	for (int i = 0; i < n; i++)
	{
		cin >> x;
		a.push_back(x);
	}

	for (int i = 0; i < a.size() - 1; i++)
	{
		if (a[i] == a[i + 1])
		{
			a1.push_back(a[i]);
			c++;
		}
		else
		{
			if (c > a2.size())
			{
				
				c = 0;
				for (int i = 0; i < a1.size(); i++)
					a2.push_back(a1[i]);
				a1.clear();
			}
		}
	}

	if (a2.size() == 0)
	{
		for (int i = 0; i < a.size(); i++)
			a2.push_back(a[i]);
	}

	for (auto i : a2)
		cout << i << " ";
	cout << a2[0];
}


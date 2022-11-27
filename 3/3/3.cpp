#include <iostream>
#include <string>

using namespace std;

int main()
{
	int n;
	string s;
	cin >> n;
		
	for (int i = 0; i < n; i++)
	{
		s =s+to_string(i);

		if (n > 9)
		{
			if (s.length() > n + (n%10)+2)
				break;
		}
	}

	cout << s[n-1];
	
}


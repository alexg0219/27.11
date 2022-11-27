#include <iostream>
#include <string>

using namespace std;

int main()
{
    int c=0;
    string s;
    cin >> s;
    
    if (count(s.begin(), s.end(), '(') == count(s.begin(), s.end(), ')'))
    {
        for (int i = 0; i < count(s.begin(), s.end(), '('); i++)
        {
            if (s[i] == '(' && s[i+ count(s.begin(), s.end(), '(')] == ')')
                c++;
        }

    }
    else
        cout << "NO";
    
    if (c == count(s.begin(), s.end(), '('))
    {
        cout << "YES" << endl;
        cout << c;
    }
    else
        if (c!=0)
            cout << "NO";
}

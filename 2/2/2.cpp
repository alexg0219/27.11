﻿#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n,c=0;
    string s;
    cin >> n;

    for (int i = 100; i < 1000; i++)
    {
        s = to_string(i);
        if ((s[0] - 48) + (s[1] - 48) + (s[2] - 48) == n)
            c++;
    }

    cout << c;
}


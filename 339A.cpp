#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    int one = 0;
    int two = 0;
    int three = 0;

    for (char c : s)
    {
        if (c == '1')
        {
            one += 1;
        }
        else if (c == '2')
        {
            two += 1;
        }
        else if (c == '3')
        {
            three += 1;
        }
    }

    int printed = 0;

    while (one--)
    {
        if (printed > 0)
        {
            cout << '+';
        }
        cout << '1';
        printed++;
    }
    while (two--)
    {
        if (printed > 0)
        {
            cout << '+';
        }
        cout << '2';
        printed++;
    }
    while (three--)
    {
        if (printed > 0)
        {
            cout << '+';
        }
        cout << '3';
        printed++;
    }
}
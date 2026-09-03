#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    for (char c : s)
    {
        char b = tolower(c);
        if (b == 'a' || b == 'e' || b == 'i' || b == 'o' || b == 'u' || b == 'y')
        {
            continue;
        }
        else
        {
            cout << "." << b;
        }
    }
}
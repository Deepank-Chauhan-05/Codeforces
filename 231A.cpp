#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int digit;
    int c = 0;
    cin >> n;

    while (n--)
    {
        int count = 0;
        for (int i = 0; i < 3; i++)
        {
            cin >> digit;
            count += digit;
        }
        if (count >= 2)
        {
            c += 1;
        }
    }
    cout << c;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int r = 5;
    int c = 5;

    int a[5][5];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> a[i][j];
        }
    }

    int row = 0;
    int col = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] == 1)
            {
                row = i;
                col = j;
            }
        }
    }

    int nrow = 0;
    int ncol = 0;

    if (row > 2)
    {
        nrow = row - 2;
    }
    else if (row <= 2)
    {
        nrow = 2 - row;
    }

    if (col > 2)
    {
        ncol = col - 2;
    }
    else if (col <= 2)
    {
        ncol = 2 - col;
    }

    cout << nrow + ncol;
}
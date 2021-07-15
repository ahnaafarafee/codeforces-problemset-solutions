#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/271/A

int main()
{
    int y;

    cin >> y;

    y++;

    while (y)
    {
        int first = y / 1000;
        int second = (y / 100) % 10;
        int third = (y / 10) % 10;
        int fourth = y % 10;
        if ((first != second) && (first != third) && (first != fourth) && (second != third) && (second != fourth) && (third != fourth))
        {
            cout << y << endl;
            break;
        }
        else
        {
            y++;
        }
    }

    return 0;
}
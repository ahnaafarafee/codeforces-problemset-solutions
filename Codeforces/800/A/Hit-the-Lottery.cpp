#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/996/A

int main()
{
    int n, rem = 0, quot = 0;

    cin >> n;

    // notes => 1 , 5, 10, 20, 100
    quot = quot + n / 100;
    rem = n % 100;

    quot = quot + rem / 20;
    rem = rem % 20;

    quot = quot + rem / 10;
    rem = rem % 10;

    quot = quot + rem / 5;
    rem = rem % 5;

    quot = quot + rem / 1;
    rem = rem % 1;

    cout << quot << endl;

    return 0;
}
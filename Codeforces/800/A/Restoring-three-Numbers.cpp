#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/1154/A
int main()
{
    int a, b, c, d;

    cin >> a >> b >> c >> d;

    int x = max(a, max(b, max(c, d))); // x is the sum of all numbers

    if (a != x)
        cout << x - a << " ";

    if (b != x)
        cout << x - b << " ";

    if (c != x)
        cout << x - c << " ";

    if (d != x)
        cout << x - d << " ";

    return 0;
}
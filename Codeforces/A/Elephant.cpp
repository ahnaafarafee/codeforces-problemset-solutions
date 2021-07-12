#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/617/A

int main()
{
    int x, count = 0;

    cin >> x;

    if (x % 5 == 0)
    {
        cout << (x / 5) << endl;
    }
    else
    {
        cout << (x / 5) + 1 << endl;
    }

    return 0;
}
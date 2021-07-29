#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/141/A

int main()
{
    string g, h, p, sum = "";

    cin >> g >> h >> p;

    sum = g + h;

    sort(sum.begin(), sum.end());
    sort(p.begin(), p.end());

    if (sum == p)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}
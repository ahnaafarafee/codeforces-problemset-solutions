#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/200/B

int main()
{
    double n;
    double sum = 0, x;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> x;
        sum = sum + (x / 100);
    }

    cout << (sum / n) * 100 << endl;

    return 0;
}
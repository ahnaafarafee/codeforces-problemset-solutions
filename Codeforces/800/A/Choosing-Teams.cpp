#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/432/A

int main()
{
    int n, k, y, count = 0;

    cin >> n >> k;

    for (int i = 0; i < n; i++)
    {
        cin >> y;

        if (5 - y >= k)
            count++;
    }

    cout << count / 3 << endl;

    return 0;
}
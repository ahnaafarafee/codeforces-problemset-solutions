#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/344/A

int main()
{
    int n, count = 0;

    cin >> n;

    int m[n];

    for (int i = 0; i < n; i++)
    {
        cin >> m[i];
    }

    for (int i = 0; i < n; i++)
    {
        if (m[i] != m[i + 1])
        {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
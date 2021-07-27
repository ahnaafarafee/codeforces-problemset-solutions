#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/268/A

int main()
{
    int n, count = 0;

    cin >> n;

    int h[n], a[n];

    for (int i = 0; i < n; i++)
    {
        cin >> h[i] >> a[i];
    }

    for (int i = 0; i < n; i++)
    {   
        for (int j = 0; j < n; j++)
        {
            if (h[i] == a[j])
                count++;
        }
    }

    cout << count << endl;

    return 0;
}
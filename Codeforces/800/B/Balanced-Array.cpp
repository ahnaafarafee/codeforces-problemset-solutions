#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/1343/B

int main()
{
    int t, n, sum1 = 0, sum2 = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        if ((n / 2) % 2 != 0)
            cout << "NO" << endl;
        else
        {
            cout << "YES" << endl;
            sum1 = 0;
            sum2 = 0;
            for (int j = 1; j <= n / 2; j++)
            {
                cout << j * 2 << " ";
                sum1 = sum1 + (j * 2);
            }
            for (int j = 1; j < n / 2; j++)
            {
                cout << (j * 2) - 1 << " ";
                sum2 = sum2 + (j * 2) - 1;
            }
            cout << sum1 - sum2 << endl;
        }
    }

    return 0;
}
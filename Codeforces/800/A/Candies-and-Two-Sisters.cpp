#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1335/A

int main()
{
    int t, n, a = 0, b = 0, count = 0;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> n;

        if (n > 2)
        {
            count = 0;
            a = n - 1;
            b = n - a;

            while (a > b)
            {
                a--;
                b++;
                count++;
            }
            cout << count << endl;
        }
        else
            cout << "0" << endl;
    }

    return 0;
}
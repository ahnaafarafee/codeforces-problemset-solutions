#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1433/A

int main()
{

    int t;
    string s;

    cin >> t;

    while (t--)
    {
        cin >> s;
        int x = s[0] - '0' - 1;
        int ans = 10 * x;

        for (int i = 1; i <= s.length(); i++)
        {
            ans += i;
        }

        cout << ans << endl;
    }

    return 0;
}
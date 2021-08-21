#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/1360/A

int solve(int a, int b)
{
    int s = min(max((2 * a), b), max(a, (2 * b)));
    return s * s;
};

int main()
{
    int t, a, b;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;

        int s = solve(a, b);

        cout << s << endl;
    }

    return 0;
}
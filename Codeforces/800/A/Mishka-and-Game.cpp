#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/703/A

int main()
{
    int n, m, c, mc = 0, cc = 0;

    cin >> n;

    while (n--)
    {
        cin >> m >> c;

        if (m > c)
            mc++;
        else if (c > m)
            cc++;
    }

    if (mc > cc)
        cout << "Mishka" << endl;
    else if (cc > mc)
        cout << "Chris" << endl;
    else
        cout << "Friendship is magic!^^" << endl;

    return 0;
}
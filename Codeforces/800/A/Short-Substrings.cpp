#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/1367/A

int main()
{
    int t;
    string a;

    cin >> t;

    for (int i = 0; i < t; i++)
    {
        cin >> a;

        for (int j = 1; j < a.length() - 2; j++)
        {
            if (a[j] == a[j + 1])
                a.erase(a.begin() + j);
        }
        cout << a << endl;
    }

    return 0;
}
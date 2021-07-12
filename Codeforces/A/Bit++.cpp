#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/282/A

int main()
{
    int n, count = 0;
    string s;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> s;

        if (s == "X++" || s == "++X")
        {
            count++;
        }
        if (s == "X--" || s == "--X")
        {
            count--;
        }
    };

    cout << count << endl;

    return 0;
}
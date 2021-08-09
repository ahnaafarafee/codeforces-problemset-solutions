#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/427/A

int main()
{
    int n, a, sum = 0, count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a;

        if (a > 0)
        {
            sum = sum + a;
        }

        if (a == -1)
        {
            if (sum > 0)
            {
                sum--;
            }
            else
                count++;
        }
    }

    cout << count << endl;

    return 0;
}
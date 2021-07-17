#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/486/A

int main()
{
    // time limit exceeded, but the right way to solve the problem 👇
    /*
    long long int n, s = 0;

    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        s = s + pow(-1, i) * i;
    }

    cout << s << endl;
    */

    //    code works, but pretty dumb solution
    long long int n;

    cin >> n;

    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
    {
        cout << -(n / 2 + 1) << endl;
    }

    return 0;
}
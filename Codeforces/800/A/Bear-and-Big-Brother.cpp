#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/791/A

int main()
{
    int a, b, count = 0;

    cin >> a >> b;

    while (a <= b)
    {
        a = a * 3;
        b = b * 2;
        count++;
    }

    cout << count << endl;

    return 0;
}
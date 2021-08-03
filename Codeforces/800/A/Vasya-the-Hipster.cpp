#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/581/A

int main()
{
    int a, b, res_a, res_b;

    cin >> a >> b;

    res_a = min(a, b);
    int max_num = max(a, b);

    res_b = (max_num - res_a) / 2;

    cout << res_a << " " << res_b;

    return 0;
}
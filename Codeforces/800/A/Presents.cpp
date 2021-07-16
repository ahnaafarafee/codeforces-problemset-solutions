#include <bits/stdc++.h>
using namespace std;

//https://codeforces.com/problemset/problem/136/A

/*
4
2 3 4 1
1 2 3 4 -> index
4 1 2 3 -> output

*/
int main()
{
    int n;

    cin >> n;

    int friends[n];
    int to_gift[n];

    for (int i = 1; i <= n; i++)
    {
        cin >> friends[i];
        to_gift[friends[i]] = i;
    }

    for (int i = 1; i <= n; i++)
    {
        cout << to_gift[i] << " ";
    }

    return 0;
}
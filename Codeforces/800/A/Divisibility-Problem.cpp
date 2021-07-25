#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1328/A

int main()
{

    // time limit will exceed👇
    /*
    int n, a, b, count = 0;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        while (a % b != 0)
        {
            count++;
            a++;
        }

        cout << count << endl;
        count = 0;
    }
    */
    int n;
    long long int a, b;

    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;

        if (a % b == 0)
        {
            cout << "0" << endl;
        }
        else
        {
            cout << b - (a % b) << endl;
        }
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/112/A

int main()
{

    string s1;
    string s2;

    cin >> s1;
    cin >> s2;

    transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
    transform(s2.begin(), s2.end(), s2.begin(), ::toupper);

    if (s1 < s2)
    {
        cout << "-1" << endl;
    }
    else if (s1 > s2)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}
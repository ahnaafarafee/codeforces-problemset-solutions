#include <bits/stdc++.h>
using namespace std;

//  https://codeforces.com/problemset/problem/59/A

int main()
{
    int upCount = 0, lowCount = 0;
    string s;

    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (isupper(s[i]))
        {
            upCount++;
        }
        else
        {
            lowCount++;
        }
    }

    if (upCount > lowCount)
    {
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout << s << endl;
    }
    else
    {
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout << s << endl;
    }

    return 0;
}
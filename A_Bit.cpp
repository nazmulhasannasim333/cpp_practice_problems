#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, x = 0;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        if (s.find('++') != string::npos)
        {
            ++x;
        }
        else
        {
            --x;
        }
    }
    cout << x << endl;
    return 0;
}
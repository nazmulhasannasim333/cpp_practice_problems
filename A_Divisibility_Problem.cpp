#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        int reminder = a % b;
        if (reminder == 0)
        {
            cout << 0 << endl;
        }
        else
        {
            cout << b - reminder << endl;
        }
    }
    return 0;
}
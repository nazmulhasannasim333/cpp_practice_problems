#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        if (n % 3 == 0)
            cout << "Second" << endl;
        else
            cout << "First" << endl;
    }
    return 0;
}
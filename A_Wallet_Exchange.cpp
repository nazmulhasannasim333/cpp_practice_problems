#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;
        if ((a + b) % 2 == 1)
            cout << "Alice" << endl;
        else
            cout << "Bob" << endl;
    }
    return 0;
}
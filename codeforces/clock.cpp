
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, c, d, f = 0;
        cin >> a >> b >> c >> d;
        for (int i = min(a, b); i < max(a, b); i++)
        {
            if ((i == c) || (i == d))
            {
                f++;
            }
        }
        cout << (f == 1 ? "YES\n" : "NO\n");
    }
}
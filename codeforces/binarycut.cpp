#include <bits/stdc++.h>
using namespace std;
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define fi first
#define se second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3fll;

int main()
{
    ll testes;
    string bstring;
    int divs;
    bool u;
    cin >> testes;
    while (testes--)
    {
        divs = 1;
        u = false;
        cin >> bstring;
        for (int i = 1; i < bstring.length(); i++)
        {
            if (bstring[i] == '1' && bstring[i - 1] == '0' && !u)
                u = true;
            else if (bstring[i] == '1' && bstring[i - 1] != '1')
                divs++;
            else if (bstring[i] == '0' && bstring[i - 1] != '0')
                divs++;
        }
        cout << divs << endl;
    }
}
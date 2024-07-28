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
       int testes,m,x,c,money,happiness;
       cin >> testes;
       while (testes--)
       {
        happiness = 0;
        money = 0;
        cin >> m >> x;
        while (m--)
        {
           cin >>  c;
            if (c <= money)
            {
                happiness++;
                money -= c;
            }
            money += x;
        }
        cout << happiness << endl;
       }     
}
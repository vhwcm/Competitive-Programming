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

char inverter(char c);
string retirar(string ud, int t);

int main()
{
    int tests;
    int coins;
    string ud;
    bool winner;
    bool verify;
    int jogador_da_vez = 1; // 1 representa a alice e -1 representa o Bob
    cin >> tests;

    for (int i = 0; i < tests; i++)
    {
        jogador_da_vez = 1;
        cin >> coins;
        cin >> ud;
        verify = 0;
        while (verify == 0)
        {
            verify = 1;
            for (int j = 0; j < ud.length(); j++)
            {
                if (j >= ud.length())
                    continue;

                if (ud[j] == 'U')
                {
                    if (ud.length() == 2)
                    {
                    }
                    else if (ud.length() == 1)
                    {
                    }
                    else if (j == 0)
                    {
                        ud[j + 1] = inverter(ud[j + 1]);
                        ud[ud.length() - 1] = inverter(ud[ud.length() - 1]);
                    }
                    else if (j == ud.length() - 1)
                    {
                        ud[0] = inverter(ud[0]);
                        ud[j - 1] = inverter(ud[j - 1]);
                    }
                    else
                    {
                        ud[j + 1] = inverter(ud[j + 1]);
                        ud[j - 1] = inverter(ud[j - 1]);
                    }

                    ud = retirar(ud, j);
                    jogador_da_vez *= -1;
                    j -= 1;
                    verify = 0;
                }
            }
        }
        if (jogador_da_vez == -1)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}

char inverter(char c)
{
    if (c == 'U')
        return 'D';
    else
        return 'U';
}

string retirar(string ud, int i)
{
    string new_ud = "";
    for (int k = 0; k < ud.length(); k++)
    {
        if (k != i)
        {
            new_ud += ud[k];
        }
    }
    return new_ud;
}
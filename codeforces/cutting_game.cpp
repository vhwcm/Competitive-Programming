#include <bits/stdc++.h>
using namespace std;
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define fi first
#define se second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 10e9;

int main()
{
    int testes; cin >> testes;
    ll a,ia,b,ib,n,m;
    char c;
    ll k;
    int bob_points;
    int alice_points;
    bool player; // 0 is Alcie
    bool grid[1000000000][1000000000];
    ll x,y;
    while (testes--)
    {
        player = 0;
        alice_points = 0;
        bob_points = 0;
        cin >> a >> b >> n >> m;
        ia = 0;
        ib = 0;
        for (int i = 0; i < a; i++)
            for (int j = 0; j < b; j++)
                grid[i][j] = false;
        while (n--)
        {
        cin >> x >> y;
        grid[x -1][y -1] = true;
        }
        while (m--)
        {
            cin >> c >> k; 
        switch (c)
        {
        case 'U':
            for (int i = ia; i < ia + k; i++)
                for(int j = ib; j < b; j++)
                    if (grid[i][j] == true)
                    {
                        if(player == 0)
                            alice_points++;
                        else
                            bob_points++;
                        grid[i][j] = false;
                    }
            ia += k;        
        break;  
        case 'D':
            for (int i= a-1; i > a-1-k; i--)
                for(int j = ib; j < b; j++)
                    if (grid[i][j] == true)
                    {
                        if(player == 0)
                            alice_points++;
                        else
                            bob_points++;
                        grid[i][j] = false;
                    }
            a -= k;
             break;
        case 'L':
        for (int i= ia; i < a; i++)
                for(int j = ib; j < ib + k; j++)
                    if (grid[i][j] == true)
                    {
                        if(player == 0)
                            alice_points++;
                        else
                            bob_points++;
                        grid[i][j] = false;
                    }
        ib  += k;
            break;
        case 'R':
            for (int i= ia; i < a; i++)
                for(int j = b-1; j > b-1-k; j--)
                    if (grid[i][j] == true)
                    {
                        if(player == 0)
                            alice_points++;
                        else
                            bob_points++;
                        grid[i][j] = false;
                    }
            b -= k;
            break;
        }
        player = !player;
        }
        cout << alice_points << " " << bob_points << endl;
    }
}                           
#include <bits/stdc++.h>
using namespace std;

#define ll long long 
#define endl '\n'

int main(){
    int m,n; cin >> m >> n;
    char c;
    int costas = 0;
    int  vis;
    bool mapa[m][n];
    for(int i = 0; i < m;i++){
    for(int j = 0; j < n; j++){
            mapa[i][j] = false;
            cin >> c;
            if(c == '#') {mapa[i][j] = true; costas++;}
    }
    }

    for(int i = 0; i < m;i++){
    for(int j = 0; j < n; j++){
            if(mapa[i][j] == 1){
                //top
                if(!(mapa[i - 1][j] == true && i != 0))
                    continue;
                //down
                if(!(mapa[i + 1][j] == true && i != m - 1))
                    continue;
                // left
                 if(!(mapa[i][j - 1] == true && j != 0))
                    continue;
                //right
                 if(!(mapa[i][j + 1] == true && i != n - 1))
                    continue;
                 costas--;
            }
    }
    }
    
    cout << costas;
}
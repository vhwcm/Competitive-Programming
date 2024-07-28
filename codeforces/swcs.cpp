#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define long long ll

int main(){
    int n,m,c,x,y; cin >> n >> c >> m;
    vector<int> stampeds;
    vector<bool> album(n + 1);
    for(auto i: album) i = false;
    while(c--){
        cin >> x; stampeds.push_back(x);
   }
    int j = m;
    while(j--){
       cin >> y;
       album[y] = true;
    }
    for(int i = 0; i < (n + 1); i++ ){
        if(album[i] == true){
            for(int k = 0; k < stampeds.size();k++)
                if(i == stampeds[k])
                 stampeds.erase(stampeds.begin() + k);
        }
    }
    int r = stampeds.size();
    cout << r << endl;
    return 0;
}
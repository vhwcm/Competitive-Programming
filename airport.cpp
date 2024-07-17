#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define ll long long

int main(){
    int a,v,x,y,k; cin >> a >> v;
    k = 1;
    bool b = false;
    vector<int> maiores;
    int maior = -1;
    vector<int> flies;
    while(a != 0 && v !=0){
    if(b == true) cout << endl;
    flies.clear();
    flies.resize(a + 1);
    for (auto i:flies){i=0;}
    int p = v;
        while(p--){
            cin >> x >> y;
            flies[x]++;
            flies[y]++;
        }
    for (auto i:flies){
        if(i > maior) maior = i;
    }
    for (int i = 0; i < a + 1; i++){
        if(flies[i] ==  maior) maiores.push_back(i);
    }

    cout << "Teste " << k << endl;
    k++;
    for (auto i:maiores){
        cout << i << ' ';
    }
    b = true;
    cout << endl;
    maiores.clear();
    maior = -1;
    cin >> a >> v;
    } 
    return 0;
}
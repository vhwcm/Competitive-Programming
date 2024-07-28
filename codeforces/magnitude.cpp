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
bool zero(ll c,ll i, ll array[]);

int main()
{
     ll tests,n,a,c;
     cin >> tests;
     while(tests--){
        c=0;
        cin >> n;
        ll array[n + 1];
        ll i;
        for(i=0;i<n;i++){
            cin >> a;
            array[i] = a;
        }
        array[i] = 1;
        for(ll i=0;i<n;i++){
            c += array[i];
            if(zero(c,i,array))
                c = abs(c);
        }
        cout << c <<endl;
     }  
}

bool zero(ll c,ll i, ll array[]){
    if(c<0 && (array[i + 1] > 0)){
        return true;
    }
    else if(i == 0){
        return zero(c, i+1,array);
    }
    else{
        return  false;
    }
}
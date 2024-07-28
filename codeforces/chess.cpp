#include<bits/stdc++.h>
using namespace std;
#define _                         \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);
#define fi first
#define se second
typedef long long ll;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3fll;
int main(){
    int t, com;
    char c;
    cin>>t;while(t--){
        pair<int,int> rover = {0,0};
        pair<int,int> helicopter = {0,0};
        cin >> com;
        vector<char> moves;
        bool a = 0;
        bool b = 0;
        while(com--){
        cin >> c;
        switch (c)
        {
        case 'N':
                if((abs(helicopter.se+1 - rover.se) < abs(helicopter.se-rover.se)) || (abs(helicopter.se+1 - rover.se) == abs(rover.se+1 - helicopter.se) &&  a == 0 && b== 1))
                {
                    helicopter.se++;
                    moves.push_back('H');
                    a = 1;
                }else{
                    rover.se++;
                    moves.push_back('R');
                    b = 1;
                }
            break;
        case 'S':
            if((abs(helicopter.se-1 - rover.se) < abs(helicopter.se-rover.se))|| (abs(helicopter.se-1 - rover.se) == abs(rover.se-1 - helicopter.se) &&  a == 0 && b== 1))
              {
                    helicopter.se--;
                    moves.push_back('H');
                    a = 1;
               } else{
                    rover.se--;
                    moves.push_back('R');
                    b = 1;
               }            
            break;
        case 'E':
            if((abs(helicopter.fi+1 - rover.fi) < abs(helicopter.fi-rover.fi)) || (abs(helicopter.fi+1 - rover.fi) == abs(rover.fi+1 - helicopter.fi) &&  a == 0 && b== 1))
                {
                    helicopter.fi++;
                    moves.push_back('H');
                    a = 1;
                }else{
                    rover.fi++;
                    moves.push_back('R');
                    b = 1;
                }
            break;
        case 'W':
            if((abs(helicopter.fi-1 - rover.fi) < abs(helicopter.fi-rover.fi)) || (abs(helicopter.fi-1 - rover.fi) == abs(rover.fi-1-helicopter.fi) &&  a == 0 && b== 1))
             {
                    helicopter.fi--;
                    moves.push_back('H');
                    a = 1;
             }else{
                    rover.fi--;
                    moves.push_back('R');
                    b = 1;
             }
            break;
        }
        }
        if (rover.fi == helicopter.fi && rover.se == helicopter.se &&  a == 1 && b == 1)
        {
            for (size_t i = 0; i < moves.size(); ++i) 
                cout << moves[i];
            cout << endl;
        }else
            cout << "NO" << endl;
    }
}
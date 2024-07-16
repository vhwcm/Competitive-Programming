#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main() {
    ios::sync_with_stdio(false);
    int n; cin >> n;
    string a,b;
    bool k = true;
    while(n--){
	cin >> a >> b;
	vector<char> sub1;
	vector<char> sub2;
	for (int i = 0; i < size(b); i++){
		sub1.push_back(b[i]);
		sub2.push_back(b[i]);

	}
	for (int i = 0; i < size(a); i++){
		if(sub1.size() != 0)
		if(a[i] == sub1.front()){
			sub1.erase(sub1.begin());
		}		
	}
    	int answer1 = size(a) + sub1.size();
	
	for (int i = size(a) - 1; i >= 0;i--){
		if(sub2.size() != 0)
		if(a[i] == sub2.back()){
		  	sub2.pop_back();
		}	
	}
	int answer2 = size(a) + sub2.size();
	int answer = min(answer1,answer2);

	cout << answer << endl;
    }
    return 0;
}


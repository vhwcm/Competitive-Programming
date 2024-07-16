#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
	int n,c; cin >> n;
	vector<int> numbs(n);
	fill(numbs.begin(), numbs.end(), 0);
	int p = n;
	int q = n;
	while(n--){
	cin >> c; numbs[c]++;
	}
	while(p--){
	int maior = *max_element(numbs.begin(), numbs.end());
	int k = find(numbs.begin(),numbs.end(),maior);
	numbs[k] = 0;
        int smaior = *max_element(numbs.begin(), numbs.end());
	numbs[k] = maior;
	int l = find(numbs.begin(),numbs.end(),smaior);
	int seq = 0;
	bool m,n;
	m =  true;
	n =  true;
	for (int i = 0; i < q; i ++){
		if(i == k){
			if(m){
				m = false;
				n = true;
				seq++;
			}else{
			  numbs[k] -= 1;
			}
		}
		if(i == l){
			if(n){
				n = false;
				m = true;
				seq++;
			}else{
			  numbs[l] -= 1;
			}
		}
	}
	if(numbs[k] == maior && numbs[l] == smaior){
	cout << seq;
	return 0;
	}
	}
}



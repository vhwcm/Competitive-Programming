#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
	long long n,k,c,answer; cin >> n >> k;
	int i;
	answer = 0;
	vector<long long> v;
	c = n;
	while(c--){
		cin >> i;
		v.push_back(i);
	}
	long long sum;
	for (long long j = 0; j < n;j++){
		sum = 0;
		for(long long i = j; i < n; i++){
			if(sum+v[i] <= k){
				sum += v[i];
				if(sum == k){
				answer++;
				}
			}else{  
				break;
			}
		}
	}
	cout << answer << endl;
}

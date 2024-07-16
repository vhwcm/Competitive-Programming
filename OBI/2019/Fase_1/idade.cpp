#include <bits/stdc++.h>
using namespace std;

#define endl '\n'

int main(){
	int m,v,a,b,c;
	cin >> m,a,b;
	c = m - (a + b);
	v = max(a,max(b,c));
	cout << v << endl;
}

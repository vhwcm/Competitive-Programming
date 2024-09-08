#include <bits/stdc++.h>

using namespace std;

#define ll long long

vector<bool>  vis;
vector<vector<int>> grafo;
int mdis = -1;
int dis = 0;
int y;

void dfs(int a){
	dis++;
	vis[a] = true;
	for(auto i : grafo[a]){
		if(!vis[i]){
			dfs(i);
		}
	}
	dis--;
	mdis = max(mdis,dis);
	if(mdis == dis)
		y = a;
}

int main(){
	int n,u,v;
	cin >> n;
	grafo.resize(n+1);
	vis.resize(n+1);
	int k = n - 1;
	while(k--){
		cin >> u >> v;
		grafo[u].push_back(v);
		grafo[v].push_back(u);
	}
	dfs(1);
	for(auto i : vis) i = false;
	dfs(y);
	cout << mdis << endl;
}


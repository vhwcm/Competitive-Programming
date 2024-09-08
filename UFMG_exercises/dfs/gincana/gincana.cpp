#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
#define _                     \
    ios ::sync_with_stdio(0); \
    cin.tie(0);

void visit(vector<vector<int>> &v, vector<bool> &vis, int num);

int main()
{
    _ int n, m, i, j, teams;
    cin >> n >> m;
    vector<vector<int>> v(n + 1);
    vector<bool> vis(n + 1, false);
    teams = 0;
    while (m--)
    {
        cin >> i >> j;
        v[i].push_back(j);
        v[j].push_back(i);
    }
    for (int k = 1; k <= n; k++)
    {
        if (!vis[k])
        {
            visit(v, vis, k);
            teams++;
        }
    }
    cout << teams << endl;
}

void visit(vector<vector<int>> &v, vector<bool> &vis, int num)
{
    vis[num] = true;
    for (int k = 0; k < v[num].size(); k++)
    {
        if (!vis[v[num][k]])
        {
            visit(v, vis, v[num]);
        }
    }
}
#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
#define _                     \
    ios ::sync_with_stdio(0); \
    cin.tie(0);

int inicio;
int ct;

bool bfs(vector<vector<int>> &v, vector<bool> &vis, int num)
{
    vis[num] = true;
    ct++;
    for (int k = 0; k < v[num].size(); k++)
    {
        if (v[num][k] == inicio && ct > 2)
        {
            return true;
        }
        if (!vis[v[num][k]])
        {
            if (v[v[num][k]].size() != 2)
            {
                return false;
            }
            return bfs(v, vis, v[num][k]);
        }
    }
    return false;
}

int main()
{
    _ int n, m, i, j, g_circles;
    g_circles = 0;
    cin >> n >> m;
    vector<vector<int>> v(n + 1);
    vector<bool> vis(n + 1);
    while (m--)
    {
        cin >> i >> j;
        v[i].push_back(j);
        v[j].push_back(i);
    }
    for (int k = 1; k <= n; k++)
    {
        if (!vis[k] && v[k].size() == 2)
        {
            ct = 0;
            inicio = k;
            if (bfs(v, vis, k))
                g_circles++;
        }
    }
    cout << g_circles << endl;
}
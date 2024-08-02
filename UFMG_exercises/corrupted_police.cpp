#include <bits/stdc++.h>
using namespace std;
#define endl '\n';
#define _                     \
    ios ::sync_with_stdio(0); \
    cin.tie(0);

int main()
{
    int n, m, i, j, pos, min_size;
    min_size = 100005;
    bool check;
    cin >> n >> m;
    vector<vector<int>> v(n + 1);
    while (m--)
    {
        cin >> i >> j;
        v[i].push_back(j);
        v[j].push_back(i);
    }
    for (int k = 1; k <= n; k++)
    {
        if (v[k].size() < min_size)
        {
            pos = k;
            min_size = v[k].size();
        }
    }
    for (int k = 1; k <= n; k++)
    {
        check = false;
        for (int l = 0; l < v[k].size(); l++)
        {
            if (v[k][l] == pos)
            {
                check = true;
                break;
            }
        }
        if (k == pos || check)
            cout << "0 ";
        else
            cout << "1 ";
    }
    cout << endl;
}
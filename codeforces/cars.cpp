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

int main()
{
    long long int testes, n, k, q; // numeros de testes, local final, numero de pontos, numero de consultas
    double tempo;
    cin >> testes;
    while (testes--)
    {
        cin >> n >> k >> q;
        long long int a[k], b[k], d;
        double velmedias[k];
        for (int i = 0; i < k; i++)
            cin >> a[i];
        for (int i = 0; i < k; i++)
            cin >> b[i];
        for (int i = 0; i < k; i++)
        {
            if (i == 0)
                velmedias[i] = (double)a[i] / b[i];
            else
                velmedias[i] = (double)(a[i] - a[i - 1]) / (b[i] - b[i - 1]);
        }
        while (q--)
        {
            tempo = 0;
            cin >> d;
            long long int i;
            for (i = 0; a[i] < d; i++)
            {
                if (i == 0)
                    tempo += (double)a[i] / velmedias[i];
                else
                    tempo += (double)(a[i] - a[i - 1]) / velmedias[i];
            }
            if (i == 0)
                tempo += (double)d / velmedias[i];
            else
                tempo += (double)(d - a[i - 1]) / velmedias[i];
            long long int temp = tempo;
            cout << temp << " ";
        }
        cout << endl;
    }
}
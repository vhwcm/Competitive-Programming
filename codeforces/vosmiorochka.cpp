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
    int testes;
    int n;
    int a;
    int b;

    cin >> testes;
    for (int i = 0; i < testes; i++)
    {
        cin >> n;
        cin >> a;
        cin >> b;
        int minim = min(2 * a, b);
        int pairs = (int)n / 2;
        int result = pairs * minim + (n % 2) * a;
        cout << result << endl;
    }

    return 0;
}
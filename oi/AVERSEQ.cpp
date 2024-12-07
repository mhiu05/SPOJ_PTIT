#include <bits/stdc++.h>
#define endl "\n"

using namespace std;

using ll = long long;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

const ll MOD = 1e18 + 7;
const int mod = 1e9 + 7;
const int MAXN = 1e5 + 5;
const ll module = 1e15 + 7;

int main()
{
    faster();
    ll n, k;
    cin >> n >> k;
    int a[n + 1];
    for (ll i = 1; i <= n; ++i)
        cin >> a[i];
    ll F[n + 1];
    F[0] = 0;
    for (ll i = 1; i <= n; ++i)
    {
        F[i] = F[i - 1] + a[i];
    }

    ll size = n;
    while (size >= 1)
    {
        for (ll i = size; i <= n; ++i)
        {
            ll sum = F[i] - F[i - size];
            if (sum >= k * size)
            {
                cout << size;
                return 0;
            }
        }
        --size;
    }
    cout << 0;
    return 0;
}
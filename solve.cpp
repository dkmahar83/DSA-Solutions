#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        ll x;
        cin >> n >> x;

        ll free = 0;
        ll best = LLONG_MIN;

        for (int i = 0; i < n; i++) {
            ll a, b, c;
            cin >> a >> b >> c;

            free += (b - 1) * a;

            ll gain = b * a - c;
            best = max(best, gain);
        }

        if (free >= x) {
            cout << 0 << "\n";
        }
        else if (best <= 0) {
            cout << -1 << "\n";
        }
        else {
            ll need = x - free;
            ll ans = (need + best - 1) / best;
            cout << ans << "\n";
        }
    }
    return 0;
}

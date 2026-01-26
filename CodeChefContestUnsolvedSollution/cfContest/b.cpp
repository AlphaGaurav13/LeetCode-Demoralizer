#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<long long> a(n), b(n);

        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        vector<long long> M(n);
        M[n - 1] = b[n - 1];
        for (int i = n - 2; i >= 0; i--) {
            M[i] = max(b[i], M[i + 1]);
        }

        vector<long long> prefix(n + 1, 0);
        for (int i = 1; i <= n; i++) {
            prefix[i] = prefix[i - 1] + M[i - 1];
        }

        for (int i = 0; i < q; i++) {
            int l, r;
            cin >> l >> r;

            int l0 = l - 1;
            int r0 = r - 1;

            long long total = prefix[r0 + 1] - prefix[l0];

            cout << total;
            if (i != q - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}

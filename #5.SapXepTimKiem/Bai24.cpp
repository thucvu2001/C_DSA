#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int& x : a) {
        cin >> x;
    }
    sort(a + 1, a + n, greater<int>());
    long long ans = a[0];
    for (int i = 1; i < n; i++) {
        if (i <= k) {
            ans += a[i];
        } else {
            ans -= a[i];
        }
    }
    cout << ans << endl;
    return 0;
}

// In ra tam giác pascal với chiều cao là n. Nếu các giá trị của tam giác pascal quá lớn, in ra giá trị trong tam giác này lấy dư với 1e9+7

#include <bits/stdc++.h>
using namespace std;

const int MOD = (int)1e9 + 7;
long long C[1001][1001];
void init()
{
    for (int i = 0; i <= 1000; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || i == j) {
                C[i][j] = 1;
            } else {
                C[i][j] = (C[i - 1][j - 1] + C[i - 1][j]) % MOD;
            }
        }
    }
}

int main()
{
    init();
    int n;
    cin >> n;
    for (int i = 0; i <= n - 1; i++) {
        for (int j = 0; j <= i; j++) {
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

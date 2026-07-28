#include <bits/stdc++.h>
using namespace std;
int main() {
    int m, n;
    cin >> m >> n;

    int A[105][105], B[105][105];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> A[i][j];

    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> B[i][j];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << A[i][j] + B[i][j];
            if (j != n - 1) cout << " ";
        }
        cout << "\n";
    }

    return 0;
}
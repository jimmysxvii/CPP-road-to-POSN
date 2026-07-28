#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;

    int min, max;
    cin >> min;
    max = min;

    for (int i = 1; i < n; i++) {
        int x;
        cin >> x;
        if (x < min) min = x;
        if (x > max) max = x;
    }

    cout << min << "\n" << max << "\n";

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int n;
    cin >> n;
    int count[10] = {};

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        count[x]++;
    }
    for (int i = 0; i <= 9; i++) {
        cout << i << "=" << count[i] << "\n";
    }

    return 0;
}
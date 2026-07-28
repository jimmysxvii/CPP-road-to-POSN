#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,a,b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for (int i=0; i<n; i++){
        cin >> v[i];
    }
    int sum = 0;
    for (int i=a; i<=b; i++){
        sum += v[i];
    }
    cout << sum << endl;
    return 0;
}
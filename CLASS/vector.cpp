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
    vector<int> qsum(n);
    for (int i=0; i<n; i++){
        if (i==0){
            cout << (qsum[i] = v[i]) << " ";
        }
        else{
            qsum[i] = qsum[i-1] + v[i];
            cout << qsum[i] << " ";
        }
    }
    cout << qsum[b] - qsum[a-1] << endl;
}
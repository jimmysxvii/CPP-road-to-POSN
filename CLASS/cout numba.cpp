#include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin>>n;
    vector <int> v(n);
    vector <int> w(10,0);

    for(int i=0;i<n;i++)
    {
        cin>>v[i];
        w[v[i]]++;
    }
    for(int i=0;i<10;i++)
    {
        cout<<i<<"="<<w[i]<<"\n";
    }
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int m, n;
    cin>>n>>m; 
    vector<vector<char> > v(n, vector<char>(m));

    for(int i=0;i<n;i++){ //v
        for(int j=0;j<m;j++){
            cin >> v[i][j];
        }
    }
    for(int i=0;i<n;i++){ //change
        for(int j=0;j<m;j++){
            if(v[i][j]=='x'){
                v[i][j]='o';
                v[i][j-1]='o'; //l
                v[i][j+1]='o'; //r
                v[i-1][j]='o'; //u
                v[i+1][j]='o'; //d
            }
        }
    }

    for(int i=0;i<n;i++){ //cout
        for(int j=0;j<m;j++){
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }

}
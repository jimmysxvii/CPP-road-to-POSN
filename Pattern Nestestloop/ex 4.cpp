#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = a-1; j >= i; j--)
        {
            cout << " " ;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "x" ;
        }
        for (int j = 2; j <= i; j++)
        {
            cout << "x" ;
        }
        cout << endl;
    }
}
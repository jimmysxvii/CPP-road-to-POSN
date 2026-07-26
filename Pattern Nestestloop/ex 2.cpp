#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for (int i = 1; i <= a; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "a" ;
        }
        for (int j = a; j >= i; j--)
        {
            cout << "b" ;
        }
        for (int j = a; j >= i; j--)
        {
            cout << "c" ;
        }
        for (int j = 1; j <= i; j++)
        {
            cout << "d" ;
        }
        cout << endl;
    }
}
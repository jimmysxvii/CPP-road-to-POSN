#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int x = sqrt(n);
    if (x > 10)
    {
        cout << "big";
    }
    else
    {
        cout << "small";
    }
}
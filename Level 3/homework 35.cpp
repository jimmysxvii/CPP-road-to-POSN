#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int i=1; i<=a; i++)
    {
        if (i < 5)
        {
            cout << i << " " << "low" << "\n";
        }
        else if (i >= 5 && i <= 10)
        {
            cout << i << " " << "mid" << "\n";
        }
        else
        {
            cout << i << " " << "high" << "\n";
        }
    }
}
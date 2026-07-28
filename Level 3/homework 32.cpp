#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int i=1; i<=a; i++)
    {
        if (i%3 == 0)
        {
            cout << "three" << "\n";
        }
        else if(i%5 == 0)
        {
            cout << "five" << "\n";
        }
        else
        {
            cout << i << "\n";
        }
    }
}
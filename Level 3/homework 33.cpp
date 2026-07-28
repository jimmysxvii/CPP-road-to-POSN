#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    for(int i=1; i<=a; i++)
    {
        if(i%3 == 0 && i%5 == 0)
        {
            cout << "fizzbuzz" << "\n";
        }
        else if (i%3 == 0)
        {
            cout << "fizz" << "\n";
        }
        else if(i%5 == 0)
        {
            cout << "buzz" << "\n";
        }
        else
        {
            cout << i << "\n";
        }
    }
}
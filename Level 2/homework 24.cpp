#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a;
    cin >> a;
    if (a > 0 && a%2 == 0)
    {
        cout << "positive even";
    }
    else if (a > 0 && a%2 != 0)
    {
        cout << "positive odd";
    }
    else if (a < 0)
    {
        cout << "negative";
    }
    else
    {
        cout << "zero";
    }
}
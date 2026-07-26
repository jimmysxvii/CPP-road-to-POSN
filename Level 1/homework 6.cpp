#include <iostream>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a;

    b = a / 60; //hours
    c = a % 60; //minutes

    cout << b << " "<< c << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    char letter = 'a';

    for (int i = 1; i < n; i++) 
    {
        for (int j = 0; j < n; j++) 
        {
            cout << letter;
            letter++;
        }
        cout << endl;
    }

    return 0;
}
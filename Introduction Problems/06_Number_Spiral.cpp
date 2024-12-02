#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while (t--) {
        long long x, y;
        cin >> x >> y;

        if (x < y) {
            // Odd Col
            if (y % 2 == 1) {
                cout << y * y - x + 1;  
            }
            else {
                y--;
                cout << y * y + x;
            }
        }
        else {
            if (x % 2 == 0) {
                cout << x * x - y + 1;
            }
            else {
                x--;
                cout << x * x + y;
            }
        }
        cout << endl;
    }
}
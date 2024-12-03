#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long sum, wsum;
    vector<int> arr;

    if (n * (n+1) % 4 != 0) {
        cout << "NO" << endl;
        return 0;
    }

    wsum = n * (n+1) / 4;

    while (wsum != sum) {
        
    }
}
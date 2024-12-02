#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    if (n == 1) {
        cout << 1 << endl;
        return 0;
    }

    if (n == 2 || n == 3) {
        cout << "NO SOLUTION" << endl;
        return 0;
    }
    
    vector<long long> arr;
    long long odd = 1, even = 2;
    
    while (even <= n) {
        arr.push_back(even);
        even += 2;
    }
    
    while (odd <= n) {
        arr.push_back(odd);
        odd += 2;
    }


    for (int i = 0 ; i < n ; i++) {
        cout << arr[i] << " ";
    }
}
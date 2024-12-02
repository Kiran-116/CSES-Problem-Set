#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    vector<long long> arr(n-1);

    for (long long i = 0 ; i < n-1 ; i++) {
        cin >> arr[i];
    }

    long long actualSum = (n * (n+1))/2;

    long long sum = 0;
    for (long long it: arr) {
        sum += it;
    }
    cout << actualSum - sum << endl;
}
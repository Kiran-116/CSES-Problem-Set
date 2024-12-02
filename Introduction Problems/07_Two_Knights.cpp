#include <bits/stdc++.h>
using namespace std;

long long solve(long long n)
{
    long long totalPos = (n * n) * (n * n - 1) / 2;
    long long attackPos = 4 * (n-1) * (n-2);

    return totalPos - attackPos;
}

int main()
{
    long long n;
    cin >> n;

    for (long long k = 1; k <= n; k++)
    {
        cout << solve(k) << endl;
    }
}
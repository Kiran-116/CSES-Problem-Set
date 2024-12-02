#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin >> s;

    long long count = 0, maxi = 0;

    for (long long i = 0 ; i < s.size() ; i++) {
        if (i == 0 || s[i] != s[i-1]) {
            maxi = max(maxi, count);
            count = 1;
        }
        else {
            count++;
        }
    }
    maxi = max(maxi, count);

    cout << maxi << endl;
}
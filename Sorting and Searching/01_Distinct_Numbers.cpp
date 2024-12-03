#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;

    vector<long long> arr(n);
    for (long long i = 0 ; i < n ; i++) {
        cin >> arr[i];
    }

    set<long long> st;
    for (auto it: arr) {
        st.insert(it);
    }
    
    cout << st.size() << endl;
}
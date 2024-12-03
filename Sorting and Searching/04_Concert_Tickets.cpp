#include <bits/stdc++.h>
using namespace std;

// Multi Set:
// Sorted Searching with Duplicate

int main()
{
    long long n, m;
    cin >> n >> m;

    // vector<long long> h(n);             // Ticket Price
    // vector<long long> t(m);             // Max Price each can Pay
    
    multiset<long long> price_of_ticket;
    for (long long i = 0 ; i < n ; i++) {
        long long price;
        cin >> price;
        price_of_ticket.insert(price);
    }

    for (long long i = 0 ; i < m ; i++) {
        long long price_paid;
        cin >> price_paid;

        auto it = price_of_ticket.upper_bound(price_paid);
        if (it == price_of_ticket.begin()) {
            cout << -1 << endl;
            continue;
        }
        else {
            cout << *(--it) << endl;
            price_of_ticket.erase(it);
        }
    }
}
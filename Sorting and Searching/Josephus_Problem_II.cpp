#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


void solve() {

    ll n, k;
    cin >> n >> k;

    list<int>lst;
    for (int i = 1; i <= n; i++) {
        lst.push_back(i);
    }
    auto it = lst.begin();

    while(!lst.empty()) {

        int steps = k % lst.size();

        for (int i = 1; i <= steps; i++) {
            it++;
            if (it == lst.end())
                it = lst.begin();
        }
        cout << *it << " ";

        it = lst.erase(it);
        if (it == lst.end())
            it = lst.begin();
    }
}



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

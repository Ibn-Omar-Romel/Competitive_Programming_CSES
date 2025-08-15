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

    int n;
    cin >> n;
    vector<int>vec(n);
    fr(0,n)
        cin >> vec[i];
    
    vsort;

    ll total = accumulate(vec.begin(), vec.end(),0LL);
    
    ll maxBook = *max_element(vec.begin(), vec.end());

    cout << max(total, 2 * maxBook) << "\n";
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

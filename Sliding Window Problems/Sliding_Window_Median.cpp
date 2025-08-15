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

    int n, k;
    cin >> n >> k;
    
    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    multiset<int>st;
    int i = 0, j = 0;

    while(j < n) {
        st.insert(vec[i]);

        if (j-i+1 == k) {
            
        }
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int t;
    cin >> t;

    while( t-- ) {
        solve();
    }
    return 0;
}

#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

#define fr(a, b) for(int i = a; i < b; i++) 

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, m;
    cin >> n >> m;
    vector<int>ticket(n);
    for ( int i = 0 ; i < n ; i++ ) {
        cin >> ticket[i];
    }

    multiset<int>st(ticket.begin(), ticket.end()) ;
    vector<int>ans(m);

    for ( int i = 0; i < m ; i++ ) {

        int a;
        cin >> a;

        auto it = st.upper_bound(a);
        if ( it == st.begin() ){
            ans[i] = -1;
        }
        else {
            --it;
            ans[i] = *it;
            st.erase(it);
        }
    }

    for ( int i = 0 ; i < m ; i++ ) {
        cout << ans[i] << endl;
    }
    
    return 0;
}


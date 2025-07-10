

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

    multiset<int>st;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        

        auto it = st.upper_bound(a);

        if (it != st.end()) {
            st.erase(it);
        }
        st.insert(a);
    }

    cout << st.size() << endl;

}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}


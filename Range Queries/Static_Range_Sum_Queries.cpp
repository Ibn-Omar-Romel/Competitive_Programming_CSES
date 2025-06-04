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


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n, q;
    cin >> n >> q;
    
    vector<ll>Sum(n);
    ll total = 0;
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        total += a;

        Sum[i] = total;
    }

    while(q--) {
        int l, r;
        cin >> l >> r;

        if (l == 1) {
            cout << Sum[r-1] << endl;
        }
        else {
            cout << Sum[r-1] - Sum[l-2] << endl;
        }
    }

    return 0;
}

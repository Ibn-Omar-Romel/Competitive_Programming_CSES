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

    int n;
    cin >> n;

    for ( ll i = 1 ; i <= n ; i++ ) {
        ll total = ((i*i) * ((i*i)-1)) / 2;
        ll attack =  4 * ( i - 1) * ( i - 2);
        cout << total - attack << endl;
    }

    return 0;
}
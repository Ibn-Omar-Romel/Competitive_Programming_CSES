#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"

#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    long long int n;
    cin >> n;

    vector < long long int > ans;
    
    ans.push_back(n);

    while( n != 1 ) {

        if ( n % 2 == 0 ) {
            ans.push_back(n/2);
            n /= 2;
        }
        else {
            ans.push_back(3*n + 1);
            n = 3 * n + 1;
        }
    }

    for ( auto x : ans )
        cout << x << " ";
    
    nl;
    
    return 0;
}

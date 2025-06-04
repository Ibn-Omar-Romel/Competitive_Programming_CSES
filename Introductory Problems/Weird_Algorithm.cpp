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

    vector<ll>vec;
    vec.push_back(n);

    while( n!=1 ) {

        if( n%2==0 ) {
            n = n / 2;
            vec.push_back(n);
        }
        else {
            n = 3*n + 1;
            vec.push_back(n);
        }
    }

    for(auto x:vec) {
        cout << x << " ";
    }
    
    return 0;
}
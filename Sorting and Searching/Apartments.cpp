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

    int n, m, k;
    cin >> n >> m >> k;

    vector<int>v1(n);
    vector<int>v2(m);

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> v1[i];
    }
    for ( int i = 0 ; i < m ; i++ ) {

        cin >> v2[i];
    }

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());
    
    int count = 0;

    int i = 0, j = 0;
    while( i < n and j < m ) {

        if ( abs(v1[i] - v2[j]) <= k ) {
            count++;
            i++;
            j++;
        }
        else if ( v1[i] > v2[j] ) {
            j++;
        }
        else 
            i++;
    }

    cout << count << endl;

    return 0;
}

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

    int n;
    cin >> n;

    vector <int> vec(n-1);
    for ( int i = 0 ; i < n-1 ; i++ ) {

        cin >> vec[i];
    }
    bool flag = false;
    sort(vec.begin(), vec.end());
    for ( int i = 1 , j = 1 ; i <= n-1 ; i++ ) {

        if ( vec[i-1] != j ) {
            cout << j << endl;
            flag = true;
            break;
        }
        else 
            j++;
    }

    if ( flag == false )
        cout << n << endl;
    
    return 0;
}

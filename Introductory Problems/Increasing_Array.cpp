#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    vector <int> vec(n);
    long long int ans = 0;

    for ( int i = 0 ; i < n ; i++ ) {

        cin >> vec[i];

        if ( i > 0 and vec[i-1] > vec[i] ) {
            
            ans += vec[i-1] - vec[i];
            vec[i] = vec[i-1];
        }
    }
    cout << ans << endl;
}
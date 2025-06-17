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

    int n, sum;
    cin >> n >> sum;
    vector<int>vec(n);
    ll total = 0;
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
        total += vec[i];
    }

    int i = 0, j = 0;
    int current_sum = 0;

    int ans = 0;

    while(j < n) {

        current_sum += vec[j];
        while(current_sum >= sum) {
            if (current_sum == sum){
                ans++;
            }
            current_sum -= vec[i];
            i++;
        }
        j++;
    }
    cout << ans << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
    return 0;
}

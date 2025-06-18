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

    ll n, k;
    cin >> n >> k;

    ll prefixSum = 0, count = 0; // prefixSum has all total sum, count has count
    map<ll, ll>mp; // to store the prefix sum
    mp[0]++; // negative value, so sum can be zero, intitally sum if zero

    for (int i = 0; i < n; i++) {
        ll a; cin >> a;
        prefixSum += a;

        ll extra = prefixSum - k; // if current sum if S, if there is a value S-k in the array, then there is k value also
        count += mp[extra]; // if the value exists then mp[S-k] will be added
        mp[prefixSum]++; // new prefix sum is updated.
    }
    cout << count << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    
    return 0;
}

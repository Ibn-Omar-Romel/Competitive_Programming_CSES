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


//using vector : TLE
// void solve() {

//     ll n, t;
//     cin >> n >> t;

//     vector<int>vec(n);
//     fr(0,n) {
//         cin >> vec[i];
//     }

//     vsort;

//     ll sec = t * vec[0];
//     ll ans = INT_MAX;

//     while(sec > 0) {

//         bool flag = false;
//         ll total = 0;

//         for (int i = 0; i < n; i++) {

//             int product = sec / vec[i];
//             total += product;
//         }

//         if (total >= t) {
//             ans = sec;
//             sec--;
//         } else {
//             break;
//         }     
//     }
//     cout << ans << endl;

// }



// using Map : TLE
// void solve() {
//     ll n, t;
//     cin >> n >> t;

//     unordered_map<int, int>mp;
//     int m = INT_MAX;
//     fr(0,n) {
//         int a; cin >> a;
//         mp[a]++;
//         m = min(m, a);
//     }


//     ll sec = t * m;
//     ll ans = INT_MAX;

//     while(sec > 0) {

//         ll total = 0;
//         for (auto it : mp) {
//             ll product = sec / it.first;
//             product *= it.second;

//             total += product;
//         }

//         if (total >= t ) {
//             ans = sec;
//             sec--;
//         }
//         else {
//             break;
//         }
//     }
//     cout << ans << endl;
// }



bool can_produce(ll sec, vector<int>& vec, ll t) {

    ll total = 0;
    for (int i = 0; i < vec.size() ; i++) {
        ll value = sec / vec[i];
        total += value;

        if (total >= t) {
            return true;
        }
    }
    return false;
}


void solve() {

    ll n, t;
    cin >> n >> t;

    vector<int>vec(n);
    fr(0, n) {
        cin >> vec[i];
    }

    vsort;


    ll left = 1, right = 1e18;
    ll ans = -1;

    while(left <= right) {

        ll mid = left + (right - left) / 2;

        if (can_produce(mid, vec, t)) {
            ans = mid;
            right = mid - 1;
        }
        else {
            left = mid + 1;
        }
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

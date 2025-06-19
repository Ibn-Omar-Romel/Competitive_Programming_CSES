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

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];

    unordered_map<int,int> freq;
    long long ans = 0;
    int l = 0;

    for (int r = 0; r < n; r++) {
        freq[a[r]]++;

        while (freq[a[r]] > 1) {
            freq[a[l]]--;
            l++;
        }
        ans += (r - l + 1LL);
    }

    cout << ans << "\n";
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

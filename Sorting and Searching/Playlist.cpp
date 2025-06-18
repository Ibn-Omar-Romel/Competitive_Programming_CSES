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

    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    map<int,int>mp;
    int maxLength = 0;
    int i = 0, j = 0;
    while(j < n) {
        mp[vec[j]]++;

        while(mp[vec[j]] > 1) {
            mp[vec[i]]--;
            i++;
        }
        maxLength = max(maxLength, j-i+1);
        j++;
    }
    cout << maxLength << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

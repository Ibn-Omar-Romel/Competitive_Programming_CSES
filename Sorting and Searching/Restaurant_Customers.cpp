#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl

#define fr(a, b) for(int i = a; i < b; i++) 

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    // vector<pair<int,int> >vec;
    map<int,int>mp;
    for ( int i = 0 ; i < n ; i++ ) {

        int a, b;
        cin >> a >> b;
        mp[a] = 1;
        mp[b] = -1;
        // vec.push_back(make_pair(a, 1));
        // vec.push_back(make_pair(b, -1));  
    }
    // sort(vec.begin(), vec.end());

    // int ans = 0;
    // int count = 0;
    // for (int i = 0; i < vec.size(); i++) {
    //     if (vec[i].second == 1)
    //         count++;
    //     else    
    //         count--;
        
    //     ans = max(ans, count);
    // }
    // cout << ans << endl;

    int ans = 0, count = 0;
    for (auto it : mp) {
        count += it.second;
        ans = max(ans, count);
    }
    cout << ans << endl;

    return 0;
}

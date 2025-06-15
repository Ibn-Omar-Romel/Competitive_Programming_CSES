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
    int x, n;
    cin >> x >> n;

    set<int> lights = {0, x};              
    multiset<int> segments = {x};          

    for (int i = 0; i < n; ++i) {
        int index;
        cin >> index;

        auto it = lights.lower_bound(index);
        int right = *it;
        int left = *prev(it);

        segments.erase(segments.find(right - left));
 
        segments.insert(index - left);
        segments.insert(right - index);

        lights.insert(index);

        cout << *segments.rbegin() << " ";
    }
    cout << endl;
}

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

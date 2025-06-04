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

    vector<int> vec(n);
    int maxElement = 0;

    for (int i = 0; i < n; ++i) {
        cin >> vec[i];
        maxElement = max(maxElement, vec[i]);
    }

    vector<int> freq(maxElement + 1, 0);
    for (int x : vec) {
        freq[x]++;
    }

    for (int i = maxElement; i >= 1; --i) {
        int count = 0;
        for (int j = i; j <= maxElement; j += i) {
            count += freq[j];
            if (count >= 2) {
                cout << i << endl;
                return;
            }
        }
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

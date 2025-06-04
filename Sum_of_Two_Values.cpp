#include<bits/stdc++.h>

using namespace std;

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL); 

    int n, x;
    cin >> n >> x;

    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    map<int,int>mp;

    for (int i = 0; i < n; i++) {
        if (mp.count(x - vec[i])) {
            cout << mp[x-vec[i]] << " " << i+1 << endl;
            return 0;
        }
        mp[vec[i]] = i+1;
    }
    cout << "IMPOSSIBLE" << endl;
}


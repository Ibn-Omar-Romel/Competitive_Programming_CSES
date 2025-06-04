#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort(vec.begin(), vec.end())
#define asort sort(veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

#define fr(a, b) for(int i = a; i < b; i++) 

int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    
    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    map<int,int>mp;
    int maxValue = 0;
    for (int i = 0; i < n; i++) {
        mp[vec[i]]++;
        maxValue = max(maxValue, mp[vec[i]]);
    }

    if (n == 1) {
        cout << 1 << endl;
    }
    else if (n >= 2 and maxValue == 1) {
        cout << 2 << endl;
    }
    else {
        cout << maxValue << endl;
    }
    

    return 0;
}

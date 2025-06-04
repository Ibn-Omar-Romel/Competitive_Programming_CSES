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


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;

    vector<pair<int, int> >vec(n);
    for(int i = 0; i < n; i++){
        cin >> vec[i].first >> vec[i].second;
    }

    sort(vec.begin(), vec.end());

    int count = 0;
    int endTime = 0;
    for (int i = 0; i < n; i++) {
        if (i == 0) {
            count++;
            endTime = vec[i].second;
        }
        else {
            if (vec[i].first >= endTime) {
                count++;
                endTime = vec[i].second;
            } else {
                endTime = min(endTime, vec[i].second);
            }
        }
    }
    cout << count << endl;

    return 0;
}

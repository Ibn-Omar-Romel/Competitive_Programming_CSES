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

    int n, x;
    cin >> n >> x;


    vector<pair<int,int>>vec(n);
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        vec[i] = {a, i+1};
    }
    sort(vec.begin(), vec.end());

    for (int i = 0; i < n - 2; i++) {

        int l = i + 1, r = n - 1; 

        while (l < r) {

            int sum = vec[i].first + vec[l].first + vec[r].first;
            if (sum == x) {
                cout << vec[i].second << " " << vec[l].second << " " << vec[r].second << endl;
                return;
            } 
            else if (sum < x) { // If the sum is less than x, we need a larger value
                // Move the left pointer to the right to increase the sum
                // This is because the array is sorted, so moving right will increase the value
                l++;
            } 
            else { // If the sum is greater than x, we need a smaller value
                // Move the right pointer to the left to decrease the sum
                // This is because the array is sorted, so moving left will decrease the value
                r--;
            }
        }
    }
    cout << "IMPOSSIBLE" << endl;
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

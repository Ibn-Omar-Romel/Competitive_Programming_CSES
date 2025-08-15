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

    int n, target;
    cin >> n >> target;

    vector<pair<int, int>>nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i].first;
        nums[i].second = i+1;
    }

    sort(nums.begin(), nums.end());

    vector<int>result;


    for (int i = 0; i < n; i++) {
        
        for (int j = i+1; j < n; j++) {

            long long newTarget = (long long) target - nums[i].first - nums[j].first;

            int left = j+1;
            int right = n-1;

            while(left < right) {

                long long sum = nums[left].first + nums[right].first;

                if (sum == newTarget) {
                    // result.push_back(nums[i].second);
                    // result.push_back(nums[j].second);
                    // result.push_back(nums[left].second);
                    // result.push_back(nums[right].second);

                    // sort(result.begin(), result.end());
                    cout << nums[i].second << " " << nums[j].second << " " << nums[left].second << " " << nums[right].second << endl;
                    return;
                    
                }
                else if (sum < newTarget) {
                    left++;
                }
                else {
                    right--;
                }
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

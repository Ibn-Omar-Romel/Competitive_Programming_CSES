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
    
    stack<int>position_stack;
    for (int i = 0; i < n; i++) {
        while (!position_stack.empty() and vec[position_stack.top()] >= vec[i]) {
            position_stack.pop();
        }

        if (position_stack.empty()) {
            cout << 0 << " ";
        } else {
            cout << position_stack.top() + 1 << " ";
        }

        position_stack.push(i);
    }
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

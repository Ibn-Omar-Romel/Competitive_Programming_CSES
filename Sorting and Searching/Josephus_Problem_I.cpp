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


void solve() { // this approach works, but gets TLE

    int n;
    cin >> n;
    vector<int>vec(n);

    for (int i = 1; i <= n; i++) {
        vec[i-1] = i; 
    }

    int i = 0;
    int k = 2;

    while(vec.size() > 0) {

        int position = (i + k -1) % n; // finding the position
        cout << vec[position] << " ";
        vec.erase(vec.begin() + position); // erasing the value
        i = position; // new position
        n = vec.size(); // new size of array
    }
}


void solve() {

    int n;
    cin >> n;

    list<int>lst;
    for (int i = 1; i <= n; i++) {
        lst.push_back(i);
    }

    int k = 2; 

    auto it = lst.begin();

    while(!lst.empty()) {
        for (int i = 1; i < k; i++) {
            it++;
            if (it == lst.end())
                it = lst.begin();
        }
        cout << *it << " ";

        it = lst.erase(it);
        if (it == lst.end())
            it = lst.begin();
    }
}



int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();

    return 0;
}

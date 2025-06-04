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

    string s;
    cin >> s;

    vector<string>vec;
    
    sort(s.begin(), s.end());
    vec.push_back(s);

    string temp = s;
    while(true) {
        next_permutation(s.begin(), s.end());
        if (s == temp)
            break;
        vec.push_back(s);
    }
    cout << vec.size() << endl;

    for (auto it : vec) {
        cout << it << endl;
    }
    
    return 0;
}

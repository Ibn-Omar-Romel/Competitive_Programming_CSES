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

    int size;
    cin >> size;
    vector<int> vec(size-1);

    for (int i = 0 ; i < size; i++) {
        cin >> vec[i];
    }

    for (int i = 1; i <= size; i++) {

        if (find(vec.begin(), vec.end(), i) == vec.end()) {
            cout << i << endl;
        }
    }

    return 0;
}
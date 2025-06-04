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

void TowerOfHanoi(int n, int from, int to, int aux, vector<pair<int,int> >& vec) {

    if (n == 1) {
        vec.push_back(make_pair(from, to));
        return;
    }
    TowerOfHanoi(n - 1, from, aux, to, vec);
    vec.push_back(make_pair(from, to));
    TowerOfHanoi(n - 1, aux, to, from, vec);
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    
    int n;
    cin >> n;
    vector<pair<int, int> > vec;

    int from = 1, to = 3, aux = 2;

    
    TowerOfHanoi(n, from, to, aux, vec);
    cout << vec.size() << endl;

    for (int i = 0 ; i < vec.size(); i++) {
        cout << vec[i].first << " " << vec[i].second << endl;
    }

    return 0;
}

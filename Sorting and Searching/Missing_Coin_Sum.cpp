#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( arra, arra+size )
#define ok cout << "ok" << endl
#define nl cout << endl


#define fr(a, b) for(int i = a; i < b; i++) 


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    int n;
    cin >> n;
    vector<int> coins(n);
    
    for (int i = 0; i < n; ++i) {
        cin >> coins[i];
    }
    
    sort(coins.begin(), coins.end());
    
    long long sum = 1;
    
    for (int coin : coins) {
        if (coin > sum) {
            break;
        }
        sum += coin;
    }
    
    cout << sum << endl;

    return 0;
}

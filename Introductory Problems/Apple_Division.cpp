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

  vector<long long> vec(n);
  for(int i = 0; i < n; i++) {
    cin >> vec[i];
  }

  long long total = accumulate(vec.begin(), vec.end(), 0LL);
  long long ans = __LONG_LONG_MAX__;


  for (int i = 0; i < (1 << n); i++) {

    long long sum1 = 0;
    for (int j = 0; j < n; j++) {
      if (i & (1 << j)) {
        sum1 += vec[j];
      }
    }
    long long sum2 = total - sum1;
    ans = min(ans, abs(sum1 - sum2));
  }
  cout << ans << endl;

}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();
    return 0;
}

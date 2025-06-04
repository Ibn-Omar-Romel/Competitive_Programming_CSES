#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    s += 'a';
    
    int count = 1;
    int ans = 0;
    for ( int i = 0 ; i <= s.size(); i++ ) {

        if ( s[i] == s[i+1] ) {
            count++;
        }
        else{
            ans = max(count,ans);
            count = 1;
        }
    }
    cout << ans << endl;
}
#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;

    if ( n == 1 )
        cout << 1 << endl;
    else if ( 2 <= n and n <= 3 )
        cout << "NO SOLUTION" << endl;
    else if ( n == 4 ) 
        cout << "2 4 1 3" << endl;
    
    else {

        vector<int>vec;
        if ( n % 2 != 0 ) {

            for( int i = n-1 ; i >= 2 ; i -= 2 ) {
                vec.push_back(i);
            }
            vec.push_back(n);
            for( int i = n-2 ; i >= 1 ; i -= 2 ) {
                vec.push_back(i);
            }
        }
        else {
            for( int i = n ; i >= 2 ; i -= 2 ) {
                vec.push_back(i);
            }
            for( int i = n-1 ; i >= 1 ; i -= 2 ) {
                vec.push_back(i);
            }
        }

        for ( auto x : vec ) {

            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}
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

    int n, x;
    cin >> n >> x;

    vector<int>vec(n);
    for ( int i = 0; i < n; i++ ) {
        cin >> vec[i];
    }

    sort( vec.begin(), vec.end() );
    int l = 0, r = n-1;
    int count = 0;

    while(l<=r) {

        if ( l == r ) {
            count++;
            break;
        }
        else if( vec[l] + vec[r] <= x ) {
            count++;
            r--;
            l++;
        }
        else if ( vec[r] + vec[l] > x and vec[r] <= x ) {
            count++;
            r--;
        }
    }
    cout << count << endl;
    
    return 0;
}



// #include <iostream>
// using namespace std;

// int main() {
	
// 	int t;
// 	cin >> t;
	
// 	while ( t-- ) {
	    
// 	    int a, b, x;
// 	    cin >> a >> b >> x;
	    
// 	    int count = 0;
	    
// 	    if (x == 1) {
// 	        cout << "0" << endl;
// 	        continue;
// 	    }
	    
// 	    if ( b % a!= 0 ) {
// 	        count++;
// 	        a++;
// 	    }
	    
// 	    while( a < b ) {
	        
// 	        if ( a * x > b )
// 	            break;
// 	        else {
// 	            count++;
// 	            a *= x;
// 	        }
	            
// 	    }
	    
// 	    cout << count + ( b - a ) << endl;
// 	}

// }

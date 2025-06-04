#include <iostream>
using namespace std;

int main() {
	
	int t;
	cin >> t;
	
	while ( t-- ) {
	    
	    long long int a, b, x;
	    cin >> a >> b >> x;
	    
	    int temp1 = a, temp2 = b;
	    
	    int count = 0;
	    
	    while( a*x <= b ) {
	        
	        count++;
	        a *= x;
	    }
	    count += ( b - a);
        
	    
	    int count1 = 0;
	    if ( temp2 % temp1 != 0 )
	        count1 = temp1 - (temp2%temp1);
	        
	    while( temp1*x <= temp2 ) {
	        
	        count1++;
	        temp1 *= x;
	    }

        if ( a == b and temp1 == temp2 )
	        cout << min( count1, count) << endl;
        else if ( a ==  b )
            cout << count << endl;
        else 
            cout << count1 << endl;
	    
 
	}

}
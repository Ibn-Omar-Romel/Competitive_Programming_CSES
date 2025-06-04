#include<bits/stdc++.h>

using namespace std;

int main() {

    int n;
    cin >> n;
    
    if ( n <= 2 ) {
        cout << "NO" << endl;
    }
    else {

        long long int sum = (n *(n+1)) / 2;


        if (sum % 2 != 0) { // if sum is odd, we can't divide it;
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
            vector<int>vec1;
            vector<int>vec2;

            if ( n % 2 != 0 ) { // sum = even, n = odd
                vec1.push_back(1);
                vec1.push_back(2);
                vec2.push_back(3);
                
                for (int i = 4; i <= n; i += 4) {  // jumping 4 index
                    vec1.push_back(i);
                    vec1.push_back(i+3);

                    vec2.push_back(i+1);
                    vec2.push_back(i+2);
                }
            }
            else { // sum == even , n == even
                for ( int i = 1; i <= n; i += 4 ) { // jumping 4 index
                    vec1.push_back(i);
                    vec1.push_back(i+3);

                    vec2.push_back(i+1);
                    vec2.push_back(i+2);
                }
            }


            cout << vec1.size() << endl;
            for ( int i = 0; i < vec1.size(); i++ ) {
                cout << vec1[i] << " ";
            }
            cout << endl;

            cout << vec2.size() << endl;
            for ( int i = 0; i < vec2.size(); i++ ) {
                cout << vec2[i] << " ";
            }
            cout << endl;
        } 
    }

    return 0;
}

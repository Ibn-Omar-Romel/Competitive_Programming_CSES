#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;

    int count = 0;
    int i = 1;
    while(true) {

        long long int five = pow(5, i);
        count += (n/five);
        if(n < five) break;
        i++;
    }
    cout << count << endl;
    return 0;
}
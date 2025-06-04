#include<bits/stdc++.h>
using namespace std;
int main() {

    int n;
    cin >> n;

    vector<int>vec(n);
    for (auto& x : vec) {
        cin >> x;
    }

    int count = 0;
    for (int i = 1; i < n; i++) {

        if (vec[i-1] > vec[i]) 
            count++;
    }
    cout << count << endl;
    return 0;
}
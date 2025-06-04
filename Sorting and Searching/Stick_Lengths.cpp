#include<bits/stdc++.h>

using namespace std;

int main() {


    int n;
    cin >> n;
    vector<int>vec(n);
    for (auto& x : vec) {
        cin >> x;
    }

    sort(vec.begin(), vec.end());

    int mid = vec[n / 2];
    long long int sum = 0;

    for (auto x : vec) {
        sum += abs(x- mid);
    }
    cout << sum << endl;
    return 0;
}
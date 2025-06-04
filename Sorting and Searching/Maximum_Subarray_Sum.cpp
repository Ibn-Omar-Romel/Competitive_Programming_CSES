#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int>vec(n);
    for (auto& x : vec) {
        cin >> x;
    }

    long long int currentSum = 0, maxSum = LONG_MIN;
    for (auto x : vec) {
        currentSum += x;
        if (maxSum < currentSum)
            maxSum = currentSum;

        if (currentSum < 0)
            currentSum = 0;
    }
    cout << maxSum << endl;

    return 0;
}
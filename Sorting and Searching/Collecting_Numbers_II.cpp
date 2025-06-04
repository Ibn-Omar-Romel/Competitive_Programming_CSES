#include<bits/stdc++.h>

using namespace std;

int main() {

    int n, q;
    cin >> n >> q;

    vector<int>pos(n+1);
    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        int a; cin >> a;
        vec[i] = a;
        pos[a] = i;
    }

    int count = 1;
    for (int i = 1; i < n ; i++) {
        if (pos[i] > pos[i+1]) {
            count++;
        }
    }

    while(q--) {

        int l, r;
        cin >> l >> r;
        if (l > r)
            swap(l,r);

        int temp = count;

        if (pos[l] > pos[r]) {
            temp--;
        }
        if (r != n) {
            if (pos[r+1] < pos[l])
                temp++;
        }

        if (l != 1) {
            if (pos[l-1] > pos[r]) 
                temp++;
        }
    
        cout << temp << endl;
    }

    return 0;
}
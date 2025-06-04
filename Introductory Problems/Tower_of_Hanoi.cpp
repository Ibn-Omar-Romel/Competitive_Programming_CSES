#include<bits/stdc++.h>

using namespace std;

void toh(int n, int from, int aux, int to, int &moves) {

    if (n == 1) {
        return;
    }

    toh(n-1, from, to, aux, moves);
    cout << from << " " << to << endl;
    moves += 1;
    toh(n-1, aux, from, to, moves);
}


int main() {

    int n;
    cin >> n;

    int moves = 0;
    toh(n, 1, 2, 3, moves);
    cout << moves << endl;
}
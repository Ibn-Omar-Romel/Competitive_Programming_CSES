#include<bits/stdc++.h>

using namespace std;

int main() {
    string s;
    cin >> s;

    map<char, int>mp;
    for ( auto ch : s) {
        mp[ch]++;
    }

    int odd_num = 0, odd_time = 0;
    char ch;
    string st = "";

    for (auto it : mp) {
        if (it.second % 2 != 0) {
            odd_num++;
            ch = it.first;
        }
        st += string (it.second/2, it.first);
    }

    if (odd_num >= 2)
        cout << "NO SOLUTION" << endl;
    else {
        s = st;
        if (odd_num != 0) {
            st += string(mp[ch], ch);
        }

        st += string(s.rbegin(), s.rend());

        cout << st << endl;
    }
}
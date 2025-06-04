#include<bits/stdc++.h>

using namespace std;

int main() {

    string s;
    cin >> s;

    string st = "";
    string ts = "";
    vector<int>vec;

    int i = 0, j = s.size()-1;

    

    while(i <= j) {

        st += s[i];
        ts += s[j];

        string tsr = ts;
        reverse(tsr.begin(), tsr.end());

        if ( st == tsr ){
            vec.push_back(i+1);
        }
        i++;
        j--;
    }


    for( int j = 0; j < vec.size(); j++ ) {
        cout << vec[j] << " ";
    }

    if ((s.size() % 2 != 2 && (vec.size() * 2 == s.size() + 1)) || 
        (s.size() % 2 == 0 && (vec.size()*2 == s.size()))) {

        for (i = vec.size() + 1; i <= s.size(); i++) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;

}
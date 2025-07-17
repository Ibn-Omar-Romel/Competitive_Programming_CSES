#include<bits/stdc++.h>

using namespace std;

#define ll long long int
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define vsort sort( vec.begin(), vec.end())
#define asort sort( veca, veca+size )
#define ok cout << "ok" << endl
#define nl cout << endl

// loops
#define fr(a, b) for(int i = a; i < b; i++) 


// void solve() {

//     int n;
//     cin >> n;

//     vector<pair<int,int>>vec(n);
//     for (int i = 0; i < n; i++) {
//         cin >> vec[i].first >> vec[i].second;
//     }

//     // sort(vec.begin(), vec.end());
//     // for (int i = 0; i < n; i++) {
//     //     cout << vec[i].first << " " << vec[i].second << endl;
//     // }

// }


void solve() {
    int n;
    cin >> n;
    vector<tuple<int, int, int>> bookings(n);

    for (int i = 0; i < n; i++) {
        int a, b;
        cin >> a >> b;
        bookings[i] = {a, b, i};  // arrival, departure, index
    }

    sort(bookings.begin(), bookings.end()); // sorting the values based on their arrival time

    // min-heap: {free_time, room_number}
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    vector<int> room(n); // stores room number assigned to each booking
    int room_count = 0;

    for (auto [start, end, idx] : bookings) {
        
        if (!pq.empty() && pq.top().first < start) {
            // Reuse a room
            auto [free_time, room_no] = pq.top();
            pq.pop();
            pq.push({end, room_no});
            room[idx] = room_no;
        } else {
            // Need new room
            ++room_count;
            pq.push({end, room_count});
            room[idx] = room_count;
        }
    }

    cout << room_count << "\n";
    for (int r : room)
        cout << r << " ";
    cout << "\n";
}


int main() {

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    solve();


    return 0;
}

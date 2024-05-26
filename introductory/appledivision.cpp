// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     std::ios::sync_with_stdio(false);
//     int n;
//     cin >> n;
//     vector<int> apples(n); 
//     for(int i = 0; i < n; i++) {
//         cin >> apples[i];
//     }
//     sort(apples.begin(), apples.end());

//     int sum_a = 0, sum_b = 0; 

//     for (int i = n-1; i >= 0; i--) {
//         if (sum_a <= sum_b) {
//             sum_a += apples[i];
//         } else {
//             sum_b += apples[i];
//         }
//     }

//     cout << abs(sum_a - sum_b) << endl; 

//     return 0;
// }


#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

ll solve(ll index, vector<ll>& apples, ll sum1, ll sum2, ll n) {
    if(index == n) {
        return abs(sum1 - sum2);
    }
    ll choose = solve(index + 1, apples, sum1 + apples[index], sum2, n);
    ll notchoose = solve(index + 1, apples, sum1, sum2 + apples[index], n);
    return min(choose, notchoose);
}

int main() {
    std::ios::sync_with_stdio(false);
    ll n;
    cin >> n;
    vll apples(n);
    for(ll i = 0; i < n; i++) {
        cin >> apples[i];
    }
    cout << solve(0, apples, 0, 0, n);
    return 0;
}

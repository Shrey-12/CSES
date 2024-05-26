#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
int main() {
    std::ios::sync_with_stdio(false);
    ll n;
    cin >> n;

    for(ll i=1;i<=n;i++){
        ll c1 = (ll)i*i*(i*i-1)/2;
        ll c2 = 4*(i-1)*(i-2);
        cout << c1 - c2<<endl;

    }
    // Your code here
    return 0;
}
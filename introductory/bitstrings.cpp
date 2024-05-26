#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
#define MOD 1000000007
int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("in.txt","r",stdin);
    //     freopen("out.txt","w",stdout);
    // #endif
    std::ios::sync_with_stdio(false);
    // Your code here
    int n;
    cin >> n;
    int res = 1;
    for(int i=0;i<n;i++){
        res*=2;
        res %= MOD;
    }
    cout << res;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main() {
    std::ios::sync_with_stdio(false);
    const int MOD = (int)1e9 + 7;
    int n,x;
    cin >> n >> x;
    vi coins(n);
    for(int i=0;i<n;i++){
        cin >> coins[i];
    }

    vector<vector<int>> dp(n+1,vector<int>(x+1));
    for(int i=0;i<n+1;i++){
        dp[i][0]=1;
    }
    for(int i=n-1;i>=0;i--){
        for(int sum=1;sum<=x;sum++){
            int skipping = dp[i+1][sum];
            int picking = 0;
            if(coins[i]<=sum){
                picking = dp[i][sum-coins[i]];
            }
            dp[i][sum] = (skipping+picking)%MOD;
        }
    }

    cout << dp[0][x] << endl;

    return 0;
}

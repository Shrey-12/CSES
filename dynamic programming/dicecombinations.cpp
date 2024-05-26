#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
#define MOD 1000000007
int main() {
    std::ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<ll> dp(n+1);
    dp[n]=1;
    for(int i=n-1;i>=0;i--){
        for(int k=1;k<=6;k++){
            if(i+k<=n)
                dp[i]=(dp[i]+dp[i+k])%MOD;
        }
    }
    cout<< dp[0];
    return 0;
}
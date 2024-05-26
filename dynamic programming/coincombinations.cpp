#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
#define MOD 1000000007
int main() {
    std::ios::sync_with_stdio(false);
    // Your code here
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    vector<int> dp(x+1);
    dp[0]=1;
    for(int i=1;i<=x;i++){
        for(auto k:arr){
            if(i>=k){
            dp[i]=(dp[i]+dp[i-k])%MOD;
            }
        }
    }
    cout << dp[x];
    return 0;
}
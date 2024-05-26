#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
int main() {
    std::ios::sync_with_stdio(false);
    // Your code here
    int n,x;
    cin >> n >> x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    vector<int> dp(x+1,1e9);
    dp[0]=0;
    for(int i=1;i<=x;i++){
        for(auto k:arr){
            if(i>=k){
            dp[i]=min(dp[i],dp[i-k]+1);
            }
        }
    }
    cout << (dp[x]<1e9?dp[x]:-1);
    return 0;
}
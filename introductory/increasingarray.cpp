#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
int main() {   
    std::ios::sync_with_stdio(false);
    // Your code here
    ll n,cnt=0;

    cin >> n;

    ll arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }


    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1]){
            cnt += (arr[i-1]-arr[i]);
            arr[i]=arr[i-1];
        }
    }

    cout << cnt;
    return 0;
}
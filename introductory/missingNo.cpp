#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
int main() {
    std::ios::sync_with_stdio(false);
    int N,XOR=0;
    cin >> N;
    int arr[N-1];

    for(int i=0;i<N-1;i++){
        cin >> arr[i];
    }
    // Your code here
    for(int i=0;i<N-1;i++){
        XOR ^= arr[i];
        XOR ^= (i+1);
    }
    XOR ^= N;
    cout << XOR;
    return 0;
}
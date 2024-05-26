#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
int main() {
    std::ios::sync_with_stdio(false);
    // Your code here
    int N;
    cin >> N;
    if(N==2||N==3){
        cout << "NO SOLUTION";
        return 0;
    }

    for(int i=2;i<=N;i=i+2){
        cout << i << " ";
    }

    for(int i=1;i<=N;i=i+2){
        cout << i << " ";
    }
    return 0;
}
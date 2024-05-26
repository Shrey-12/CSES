#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
int main() {
    // #ifndef ONLINE_JUDGE
    //     freopen("in.txt","r",stdin);
    //     freopen("out.txt","w",stdout);
    // #endif
    std::ios::sync_with_stdio(false);
    // Your code here

    int t;
    cin >> t;
    while(t--){
        ll a,b;
        cin >> a >> b;
        if(2*a >= b and 2*b>=a and (2*a-b)%3==0 and (2*b-a)%3==0){
            cout << "YES"<< endl;
            continue;
        }
        cout << "NO"<<endl;

    }

    return 0;
}
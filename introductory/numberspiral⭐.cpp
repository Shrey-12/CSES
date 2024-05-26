#include <iostream>
#include <cmath>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

int main() {
    ios::sync_with_stdio(false);
    int t;
    cin >> t;
    while(t--){
        int y,x;
        cin >> y >> x;
        if(y>x){
            if(y%2==1){
                cout << (ll)((ll)(y-1)*(ll)(y-1)) + x;
            }else{
                cout << (ll)((ll)y*y - x + 1);
            }
        }else{
            if(x%2==1){
                cout << (ll)((ll)x*x - y + 1);
            }else{
                cout << (ll)((ll)(x-1)*(ll)(x-1)) + y;
            }
        }
        cout << "\n";
    }
    return 0;
}

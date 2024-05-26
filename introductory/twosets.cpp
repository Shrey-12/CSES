#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
int main() {
    
    std::ios::sync_with_stdio(false);
    ll n;
    ll summ=0, a_total = 0;
    cin >> n;
    summ = (ll)n*(n+1)/2;
    ll max_elem = n,total=summ/2;
    

    if(summ%2==1){
        cout << "NO";
        return 0;
    }
    cout << "YES"<<endl;
    vector<ll> a,b,visited(n+1,0);
    
    while(a_total < total){
        ll remaining = total - a_total;
        // cout << "a "<<a_total<< " r " << remaining <<" m " << max_elem <<endl;
        if(remaining > max_elem){
            a.push_back(max_elem);
            a_total+= max_elem;
            visited[max_elem]=1;
            max_elem--;
            
        }else{
            a.push_back(remaining);
            a_total += remaining;
            visited[remaining] = 1;
        }
    }
    for(ll i=1;i<=n;i++){
        if(!visited[i]){
            b.push_back(i);
        }
    }
    cout << a.size()<<endl;
    for(ll i=0;i<a.size();i++){
        cout <<a[i] << " ";
    }
    cout << endl;

    cout << b.size()<<endl;
    for(ll i=0;i<b.size();i++){
        cout <<b[i] << " ";
    }
    cout << endl;

    // Your code here
    return 0;
}
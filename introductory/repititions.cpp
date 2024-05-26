#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
int main() {
    std::ios::sync_with_stdio(false);
    // Your code here
    string s;
    cin >> s;
    int max_val=0;
    int val=1;
    char last_char = s[0];
    for(int i=1;i<s.length();i++){
        if(last_char==s[i]){
            val++;
        }else{
            if(val>max_val){
                max_val = val;
                // cout << max_val << last_char<<endl;
            }
            val = 1;
            last_char = s[i];
        }
    }
    if(max_val<val){
        max_val = val;
    }
    cout << max_val;

    return 0;
}
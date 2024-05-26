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
    string s;
    cin >> s;
    unordered_map<char,int> hash;
    int odd = 0; // Initialize odd count
    char odd_c;
    for(int i=0;i<s.length();i++){
        hash[s[i]]++;
    }

    string output;

    for(auto i=hash.begin(); i!=hash.end(); i++){ // Corrected from 'm' to 'hash'
        if(i->second%2==1){
            odd++;
            odd_c = i->first;
            i->second--; // Decrease frequency of odd character
        }
    }
    
    if(odd>1){ // Changed odd_count to odd
        cout << "NO SOLUTION"<<endl;
        return 0;
    }
    
    for(auto i=hash.begin(); i!=hash.end(); i++){ 
        for(int j=0;j<i->second/2;j++){ 
            output+=i->first; 
        }
    }
    string second_half = output; 
    reverse(second_half.begin(), second_half.end()); 
    if(odd==1){ 
        output+=odd_c; 
    }
    output += second_half; 
    cout << output;

    return 0;
}

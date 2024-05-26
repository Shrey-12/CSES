#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>

vector<string> generateGray(int n){
    if(n==1) return {"0","1"};

    vector<string> result=generateGray(n-1);
    vector<string> finalRes;

    for(int i=0;i<result.size();i++){
        string s = "0";
        finalRes.push_back(s+result[i]);
    }

    for(int i=result.size()-1;i>=0;i--){
        string s = "1";
        finalRes.push_back(s+result[i]);
    }
    return finalRes;
}
int main() {
    std::ios::sync_with_stdio(false);
    // Your code here
    int n;
    cin >> n;
    vector<string> res = generateGray(n);
    for(int i=0;i<res.size();i++){
        cout << res[i]<< endl;
    }


    return 0;
}
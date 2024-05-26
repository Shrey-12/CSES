#include <iostream>
#include <vector>
using namespace std;

void weirdAlgorithm(vector<long long> &res, long long n) {
    while (n != 1) {
        res.push_back(n); // Store the current value before changing it
        if (n % 2 == 0) {
            n = n / 2;
        } else {
            n = n * 3 + 1;
        }
    }
    res.push_back(1); 
}

int main() {
    long long n;
    cin >> n;
    if (n == 1) {
        cout << "1"; // Output and return 1 if input is 1
        return 0; 
    }
    vector<long long> res;
    weirdAlgorithm(res, n);
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << " ";
    }
    return 0;
}

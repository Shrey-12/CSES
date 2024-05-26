#include <iostream>
#include <vector>
using namespace std;

void towerofHanoi(vector<string>& res, int n, int left, int middle, int right) {
    if (n == 0) return;
    towerofHanoi(res, n - 1, left, right, middle);
    res.push_back(to_string(left) + " " + to_string(right)); // Corrected string concatenation
    towerofHanoi(res, n - 1, middle, left, right);
}

int main() {
    std::ios::sync_with_stdio(false);
    int n;
    cin >> n;
    vector<string> res;
    towerofHanoi(res, n, 1, 2, 3);
    cout << res.size() << endl;
    for (int i = 0; i < res.size(); i++) {
        cout << res[i] << endl;
    }
    return 0;
}

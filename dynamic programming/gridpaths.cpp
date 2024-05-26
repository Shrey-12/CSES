#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define vi vector<int>
#define vll vector<long long int>
#define MOD 1000000007

int main() {
  std::ios::sync_with_stdio(false);

  int n;
  cin >> n;
  vector<vector<char>> grid(n, vector<char>(n));

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  vector<int> currentrow(n);
  if (grid[n - 1][n - 1] == '.') {
    currentrow[n - 1] = 1;
  } else {
    currentrow[n - 1] = 0;
  }

  for (int j = n - 2; j >= 0; j--) {
    if (grid[n - 1][j] == '.') {
      currentrow[j] = currentrow[j + 1];
    } else {
      currentrow[j] = 0;
    }
  }

  for (int i = n - 2; i >= 0; i--) {
    vector<int> nextrow(n);
    for (int j = n - 1; j >= 0; j--) {
      if (grid[i][j] == '*') {
        nextrow[j] = 0;
      } else {
        int ans1 = (i < n - 1) ? currentrow[j] : 0;
        int ans2 = (j < n - 1) ? nextrow[j + 1] : 0;
        nextrow[j] = (ans1 + ans2) % MOD;
      }
    }
    currentrow = nextrow;
  }

  cout << currentrow[0];
  return 0;
}

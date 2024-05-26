#include <bits/stdc++.h>
using namespace std;

#define N 7  // Grid size (7x7)

bool split_occurs(bool vis[N][N], int i, int j) {
    // Check if path hits edges (excluding corners)
    return ((i == 0 || i == N - 1) && j != 0 && j != N - 1 &&
            vis[i + (i < N - 1)][j] && !vis[i][j - 1] && !vis[i][j + 1]) ||
           ((j == 0 || j == N - 1) && i != 0 && i != N - 1 &&
            vis[i][j + (j < N - 1)] && !vis[i - 1][j] && !vis[i + 1][j]);
}

bool loop_occurs(bool vis[N][N], int i, int j) {
    // Check if path creates a loop (not touching edges)
    return (i > 0 && i < N - 1 && j > 0 && j < N - 1 &&
            ((vis[i][j - 1] && vis[i][j + 1] && !vis[i - 1][j] && !vis[i + 1][j]) ||
             (vis[i - 1][j] && vis[i + 1][j] && !vis[i][j - 1] && !vis[i][j + 1])));
}

void solve(bool (&vis)[N][N], int x, int y, int pos, string path, int& res) {
    // Base cases (invalid cell or reached target too early)
    if (x < 0 || x >= N || y < 0 || y >= N || vis[x][y]) {
        return;
    }

    if (x == N - 1 && y == 0 ) {
        if (pos < N * N - 1)
        return;  // Prune early on reaching target prematurely
        res++;
    }

    // Mark current cell as visited and check move direction
    vis[x][y] = true;
    char move = path[pos];

    // Handle 'U', 'D', 'L', 'R', '?' recursively
    if (move == 'U' || move == '?') {
        solve(vis, x - 1, y, pos + 1, path, res);
    }
    if (move == 'D' || move == '?') {
        solve(vis, x + 1, y, pos + 1, path, res);
    }
    if (move == 'L' || move == '?') {
        solve(vis, x, y - 1, pos + 1, path, res);
    }
    if (move == 'R' || move == '?') {
        solve(vis, x, y + 1, pos + 1, path, res);
    }

    // Backtrack (unmark visited cell)
    vis[x][y] = false;
}

int main() {
    string path;
    cin >> path;

    bool vis[N][N] = {false};
    int res = 0;
    solve(vis, 0, 0, 0, path, res);

    cout << res << endl;

    return 0;
}

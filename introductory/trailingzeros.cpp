#include <bits/stdc++.h>
using namespace std;

#define ll long long int

int main() {
    std::ios::sync_with_stdio(false);

    ll n;
    cin >> n;

    ll count = 0;
    for (ll i = 5; n / i >= 1; i *= 5) {
        count += n / i;
    }

    cout << count << endl;

    return 0;
}

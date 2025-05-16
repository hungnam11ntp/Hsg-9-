#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll fact(ll n) {
    if (n == 0) {
        return 1;
    }
    ll ans = 1;
    for (int i = 1; i <= n; i++) {
        ans *= i;
    }
    return ans;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll n, m, ans = 0;
    string s;
    cin >> n >> m >> s;
    
    for (int i = 0; i <= n - m; i++) {
        ans += fact(n) / (fact(n - i) * fact(i));
    }
    
    cout << ans;
    
    return 0;
}

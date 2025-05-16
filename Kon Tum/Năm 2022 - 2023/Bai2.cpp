#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    unordered_map<int, int> m;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i: a) {
        if (m.count(i)) {
            m[i]++;
        }
        else {
            m[i] = 1;
        }
    }    
    
    cout << m.size() << "\n";
    int maxx = 0, ans = 1e9;
    for (pair<int, int> p: m) {
        maxx = max(maxx, p.second);
    }
    for (pair<int, int> p: m) {
        if (p.second == maxx) {
            ans = min(p.first, ans);
        }
    }
    
    cout << ans;
    
    return 0;
}

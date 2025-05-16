#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    map<int, int> m;
    for (int i: a) {
        if (m.count(i)) {
            m[i]++;
        }
        else {
            m[i] = 1;
        }
    }
    
    int height = 0, count = 0;
    for (pair<int, int> p: m) {
        if (p.first >= height && p.second >= count) {
            height = p.first;
            count = p.second;
        }
    }
    
    cout << height << " " << count;
    
    return 0;
}

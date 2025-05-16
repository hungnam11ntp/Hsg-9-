#include <bits/stdc++.h>

using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;

    vector<pair<int, int>> events;
    for (int i = 1; i <= n; i++) {
        int a, b;
        cin >> a >> b;
        events.push_back(a, 1);
        events.push_back(b, -1);
    }
    
    sort(events.begin(), events.end());

    int count = 0;
    int high = 0;
    for (auto [t, d] : events) {
        count += d;
        high = max(high, count);
    }
    cout << high << "\n";
    
}

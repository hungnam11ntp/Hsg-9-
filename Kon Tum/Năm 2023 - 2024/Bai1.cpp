#include <bits/stdc++.h>

using namespace std;

bool check(string num) {
    set<char> s;
    for (char c: num) {
        s.insert(c);
    }
    if (s.size() < num.size()) {
        return false;
    }
    return true;
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int n, num = 0, ans = 0;
    cin >> n;
    
    for (int i = 9; i > 0; i--) {
        if (n >= i) {
            num = num * 10 + i;
            n -= i;
        } 
    }
    
    while (num > 0) {
        int digit = num % 10;
        ans = ans * 10 + digit;
        num /= 10;
    }
    
    cout << ans;
    
    return 0;
}

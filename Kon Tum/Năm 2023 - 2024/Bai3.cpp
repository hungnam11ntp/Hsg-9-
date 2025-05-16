#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    string s;
    vector<string> a;
    set<int> count;
    cin >> s;
    
    string num;
    for (char i : s) {
        if (isdigit(i)) {
            num += i;
        } 
        else {
            if (!num.empty()) {
                a.push_back(num);
                num = "";
            }
        }
    }

    if (!num.empty()) {
        a.push_back(num);
    }

    for (string i : a) {
        int x = stoi(i);
        count.insert(x);
    }

    cout << count.size();

    return 0;
}

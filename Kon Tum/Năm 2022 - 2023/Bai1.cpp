#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int a, b;
    cin >> a >> b;
    int g = __gcd(a, b);
    cout << a / g << " " <<  b / g;
    
    return 0;
}

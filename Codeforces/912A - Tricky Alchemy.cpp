#include <bits/stdc++.h>
using namespace std;
int main(){
    long long x, y, a, b, c, t_y, t_b, ans = 0;
    cin >> x >> y;
    cin >> a >> b >> c;
    t_y = 2 * a + b;
    t_b = b + 3 * c;
    if(t_y > x) ans += t_y - x;
    if(t_b > y) ans += t_b - y;
    cout << ans << "\n";
    return 0;
}

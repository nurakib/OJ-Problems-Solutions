#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, pos, l, r, ans;
    cin >> n >> pos >> l >> r;
    if(l == 1 && r == n){
        cout << 0 << "\n";
        return 0;
    }
    if(pos < l && pos < r){
        if(r == n) ans = l - pos;
        else ans = r - pos;
    }
    else if(pos == l){
        if(r == n){
            cout << 1 << "\n";
            return 0;
        }
        ans = r - l;
    }
    else if(pos == r){
        if(l == 1){
            cout << 1 << "\n";
            return 0;
        }
        ans = r - l;
    }
    else if(pos > l){
        if(l == 1) ans = abs(r - pos);
        else if(r == n) ans = abs(pos - l);
        else ans = min(pos - l, abs(r - pos)) + r - l;
    }
    if(l != 1) ans++;
    if(r != n) ans++;
    cout << ans << "\n";
    return 0;
}

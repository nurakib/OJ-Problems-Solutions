#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    int n, prev, foo, var, f;
    bool c1, c2;
    c1 = c2 = true;
    foo = var = f = 0;
    cin >> n;
    cin >> prev;
    for(int i = 1; i < n; i++){
        int x;
        cin >> x;
        if((x > prev || x == prev) && foo == 1) f = 1;
        if(var == 1 && x > prev) f = 1;
        if(x < prev && c1 == true) foo = 1, c1 = false;
        else if(x == prev && c2 == true) var = 1, c2 = false;
        prev = x;
    }
    if(!f) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

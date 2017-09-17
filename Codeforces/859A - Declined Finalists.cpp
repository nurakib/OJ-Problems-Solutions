#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, t, p = 25;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> t;
        p = max(p, t);
    }
    cout << p - 25 << "\n";
    return 0;
}

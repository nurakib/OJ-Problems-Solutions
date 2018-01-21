#include <bits/stdc++.h>
using namespace std;
int main(){
    int n, val[4];
    cin >> n;
    while(n--){
        cin >> val[0] >> val[1] >> val[2] >> val[3];
        sort(val, val + 4);
        if((val[0] == val[1]) && (val[2] == val[3])) cout << "YES" << "\n";
        else cout << "NO" << "\n";
    }
    return 0;
}

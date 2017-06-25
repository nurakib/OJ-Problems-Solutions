#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main(){
    IOS;
    int n;
    cin >> n;
    if(n % 2 == 0 && n != 2) cout << "YES" << "\n";
    else cout << "NO" << "\n";
    return 0;
}

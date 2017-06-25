#include <bits/stdc++.h>
using namespace std;
#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);
int main(){
    IOS;
    int a[2], n, turn = 0;
    cin >> a[0] >> a[1] >> n;
    while(n -= __gcd(a[turn], n))
        turn = 1 - turn;
    cout << turn << "\n";
    return 0;
}

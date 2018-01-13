#include <bits/stdc++.h>
using namespace std;
long long ans(int base, int expo){
    long long val = 1;
    while(expo != 0){
        val *= base;
        expo--;
    }
    return val;
}
int main(){
    long long n, k, tmp, bit = 0;
    cin >> n >> k;
    tmp = n;
    while(tmp != 0){
        tmp /= 2;
        bit++;
    }
    //cout << bit << "\n";
    if(k == 1) cout << n << "\n";
    else cout << ans(2, bit) - 1 << "\n";
    return 0;
}

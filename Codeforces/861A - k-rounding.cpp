#include <bits/stdc++.h>
using namespace std;
long long getRounding(long long n, long long k){
    long long rounding = 1;
    for(int i = 1; i <= k; i++) rounding *= 10;
    long long result = __gcd(rounding, n);
    return ((rounding * n) / result);
}
int main(){
    long long n, k;
    cin >> n >> k;
    cout << getRounding(n, k);
    return 0;
}

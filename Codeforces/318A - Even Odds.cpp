#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, k;
    cin >> n >> k;
    n = (n % 2) ? n / 2 + 1 : n / 2;
    if(k > n) cout << 2 * (k - n) << endl;
    else cout << 2 * (k - 1) + 1;
    return 0;
}

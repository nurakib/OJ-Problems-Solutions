#include <bits/stdc++.h>
using namespace std;
int main(){
    long n, k;
    cin >> n >> k;
    if(k == 0 || n == k) cout << 0 << " " << 0 << "\n";
    else{
        if(k <= n / 3) cout << 1 << " " << 2 * k << "\n";
        else cout << 1 << " " << n - k << "\n";
    }
    return 0;
}

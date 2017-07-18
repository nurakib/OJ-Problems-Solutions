#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    long long n, m;
    cin >> t;
    for(int i = 1; i <= t; i++){
        cin >> n >> m;
        cout << "Case " << i << ": " << (n * m) / 2 << "\n";
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;
int main(){
    long long n, r, ans, tmp;
    while(cin >> n >> r, n || r){
        ans = 1;
        tmp = r;
        if(r > n / 2)
            r = n - r;
        for(int i = 0; i < r; i++)
            ans = ans * (n - i) / (1 + i);
        cout << ans << endl;
    }
    return 0;
}

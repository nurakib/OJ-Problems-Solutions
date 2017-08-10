#include <bits/stdc++.h>
using namespace std;
#define ll long long
bool lucky(ll n){
    int tmp, cnt = 0;
    while(n != 0){
        tmp = n % 10;
        n /= 10;
        if(tmp == 4 || tmp == 7)
            cnt++;
    }
    if(cnt == 4 || cnt == 7) return true;
    else return false;
}
int main(){
    ll n;
    cin >> n;
    if(lucky(n)) cout << "YES\n";
    else cout << "NO\n";
    return 0;
}

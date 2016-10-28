#include <bits/stdc++.h>
using namespace std;
#define ll long long
long long bigmod(ll b, ll p, ll m){
    ll p1, p2, hp;
    if(p == 0)
        return 1;
    else if(p % 2 == 0){
        hp = bigmod(b, p / 2, m);
        return (hp * hp) % m;
    }
    else{
        p1 = b % m;
        p2 = bigmod(b, p - 1, m);
        return (p1 * p2) % m;
    }
}
int main(){
    ll a, b, c;
    while(cin >> a >> b >> c)
        cout << bigmod(a, b, c) << endl;
    return 0;
}

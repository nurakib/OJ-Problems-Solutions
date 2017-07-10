#include <bits/stdc++.h>
using namespace std;
long bigmod(string num, long m){
    long i, rem;
    for(i = 0, rem = 0; num[i]; i++){
        rem = rem * 10 + (num[i] - '0');
        rem = rem % m;
    }
    return rem;
}
int main(){
    long t, m, tmp;
    string s;
    cin >> t;
    for(long i = 1; i <= t; i++){
        cin >> s >> m;
        if(s[0] == '-') s.erase(s.begin() + 0);
        if(m < 0) m *= -1;
        tmp = bigmod(s, m);
        if(tmp == 0) cout << "Case " << i << ": divisible\n";
        else cout << "Case " << i << ": not divisible\n";
    }
    return 0;
}
